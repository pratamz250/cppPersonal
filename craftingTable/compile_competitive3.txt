#!/usr/bin/env bash
###############################################################################
# compile.sh
# A lightweight C/C++ compilation helper for competitive programming
#
# Author     : pratamz250
# License    : MIT
# Repository : https://github.com/pratamz250/cppPersonal/blob/main/craftingTable/compile.sh
# Note	   : slops de IA sao uteis, sim!
#
# Default behavior:
#   • Compile with -O2 -pipe
#   • Execute automatically after a successful build
#
# Options:
#   --debug         Compile with -Og -g3
#   --sanitize      Enable AddressSanitizer and UBSanitizer
#   --compile-only  Do not execute after compilation
#   --verbose       Show compilation information
#   --clean         Remove *.out from current directory
#   -h, --help      Show this help
#
# How to use:
# 	mkdir -p ~/.local/bin
# 	chmod +x compile.sh
# 	mv compile.sh ~/.local/bin/
# 	source ~/.profile
# 	compile.sh helloWorld.cpp
###############################################################################

set -euo pipefail

# Standard configurations
MODE="contest"
SANITIZE=false
RUN=true
VERBOSE=false
FILE=""

# Compilation flags
COMMON_WARNINGS=(
    -Wall -Wextra -Wpedantic -Wshadow -Wconversion
    -Wformat=2 -Wundef -Wcast-align -Wcast-qual -Wduplicated-cond
    -Wduplicated-branches -Wnull-dereference -Wmisleading-indentation
    -Wfloat-equal -Wswitch-enum -Werror=return-type -Wno-vla
)

CPP_WARNINGS=(
    -Wold-style-cast -Woverloaded-virtual -Wnon-virtual-dtor
    -Wuseless-cast
)

CONTEST_FLAGS=(-O2 -pipe)
DEBUG_FLAGS=(-Og -g3 -fno-omit-frame-pointer)
SAN_FLAGS=(-fsanitize=address -fsanitize=undefined)

# Helper functions
usage() {
    cat <<EOF
Usage: 
  compile.sh source.cpp
  compile.sh source.cpp < input.txt

Options:
  --debug
  --sanitize
  --compile-only
  --verbose
  --clean
  -h, --help
EOF
}

check_compiler() {
    command -v "$1" >/dev/null || { echo "Compiler '$1' not found."; exit 1; }
}

clean() {
    rm -f *.out
    echo "Removed *.out files."
}

# Arguments parsing
while [[ $# -gt 0 ]]; do
    case "$1" in
        --debug)        MODE="debug" ;;
        --sanitize)     SANITIZE=true ;;
        --compile-only) RUN=false ;;
        --verbose)      VERBOSE=true ;;
        --clean)        clean; exit 0 ;;
        -h|--help)      usage; exit 0 ;;
        *)              FILE="$1" ;;
    esac
    shift
done

# File validations
[[ -z "${FILE}" ]] && { usage; exit 1; }
[[ -f "${FILE}" ]] || { echo "File not found: ${FILE}"; exit 1; }

FILE=$(realpath "$FILE")
EXT="${FILE##*.}"
OUT="${FILE%.*}.out"

# Difine compiler by extention
case "$EXT" in
    c)
        COMPILER=gcc
        STD=-std=c23
        EXTRA=()
        ;;
    cpp|cc|cxx)
        COMPILER=g++
        STD=-std=c++23
        EXTRA=("${CPP_WARNINGS[@]}")
        ;;
    *)
        echo "Unsupported extension: .$EXT"
        exit 1
        ;;
esac

check_compiler "$COMPILER"

# Flags construction
FLAGS=()
if [[ "$MODE" == "contest" ]]; then
    FLAGS+=("${CONTEST_FLAGS[@]}")
else
    FLAGS+=("${DEBUG_FLAGS[@]}")
fi

if $SANITIZE; then
    FLAGS+=("${SAN_FLAGS[@]}")
fi

# Verbose mode
if $VERBOSE; then
    echo "Compiling..."
    echo "Compiler : $COMPILER"
    echo "Mode     : $MODE"
    echo "Sanitize : $SANITIZE"
    echo "Output   : $OUT"
    echo
fi

# Compilation
"$COMPILER" \
    "$STD" \
    "${COMMON_WARNINGS[@]}" \
    "${EXTRA[@]}" \
    "${FLAGS[@]}" \
    "$FILE" \
    -o "$OUT"

$VERBOSE && echo "Build completed successfully."

# Running
if $RUN; then
    if $VERBOSE; then
        echo
        echo "Running executable..."
        echo
    fi
    "$OUT"
fi
