#!/usr/bin/env bash

###############################################################################
# compile.sh
#
# A lightweight C/C++ compilation helper for GCC/G++.
#
# Version    : 1.0.0
# Author     : pratamz250
# License    : MIT
# Repository : https://github.com/<your-username>/compile.sh
#
# Features
# --------
# • Automatic C/C++ compiler detection
# • Debug mode (default)
# • Release mode
# • Optional execution after compilation
# • Automatic cleanup of generated executables
# • Extensive warning flags
# • AddressSanitizer + UndefinedBehaviorSanitizer
#
# Installation
# ------------
#
# chmod +x compile.sh
# mkdir -p ~/.local/bin
# mv compile.sh ~/.local/bin/
#
# Add to PATH if needed:
#
# export PATH="$HOME/.local/bin:$PATH"
# source ~/.bashrc
#
# Verify installation:
#
# which compile.sh
#
# For usage examples:
#
# compile.sh --help
#
# Full documentation:
#
# Nao vou perder tempo escrevendo isso.
#
###############################################################################

set -uo pipefail

###############################################################################
# Colors
###############################################################################

RED="\033[1;31m"
GREEN="\033[1;32m"
YELLOW="\033[1;33m"
BLUE="\033[1;34m"
RESET="\033[0m"

###############################################################################
# Global configuration
###############################################################################

MODE="debug"
RUN_AFTER=false
CLEAN=false

###############################################################################
# Compiler flags
###############################################################################

COMMON_WARNINGS=(
    -Wall
    -Wextra
    -Wpedantic
    -Wshadow
    -Wconversion
    -Wsign-conversion
    -Wformat=2
    -Wundef
    -Wcast-align
    -Wcast-qual
    -Wduplicated-cond
    -Wduplicated-branches
    -Wnull-dereference
    -Wmisleading-indentation
    -Wfloat-equal
    -Wswitch-enum
    -Werror=return-type
)

DEBUG_FLAGS=(
    -Og
    -g3
    -fno-omit-frame-pointer
    -fsanitize=address
    -fsanitize=undefined
)

RELEASE_FLAGS=(
    -O3
    -DNDEBUG
)

CPP_WARNINGS=(
    -Wold-style-cast
    -Woverloaded-virtual
    -Wnon-virtual-dtor
    -Wuseless-cast
)

###############################################################################
# Print help message
###############################################################################

usage() {

cat << EOF

Usage:

    compile.sh source.c
    compile.sh source.cpp

Options

    --release      Build with optimizations
    --run          Execute after successful compilation
    --clean        Remove generated executables (*.out)
    -h, --help     Show this help message

Examples

    compile.sh main.cpp

    compile.sh --run main.cpp

    compile.sh --release main.cpp

    compile.sh --release --run main.cpp

    compile.sh --clean

EOF

}

###############################################################################
# Verify compiler exists
###############################################################################

check_compiler() {

    if ! command -v "$1" >/dev/null; then
        printf "${RED}Error:${RESET} compiler '%s' not found.\n" "$1"
        exit 1
    fi

}

###############################################################################
# Compile source file
###############################################################################

compile() {

    local FILE="$1"

    if [[ ! -f "$FILE" ]]; then
        printf "${RED}Error:${RESET} file '%s' does not exist.\n" "$FILE"
        exit 1
    fi

    local EXT="${FILE##*.}"
    local OUT="${FILE%.*}.out"

    local COMPILER
    local STD

    EXTRA_FLAGS=()

    case "$EXT" in

        c)

            COMPILER=gcc
            STD=-std=c23
            ;;

        cpp|cc|cxx)

            COMPILER=g++
            STD=-std=c++23
            EXTRA_FLAGS+=("${CPP_WARNINGS[@]}")
            ;;

        *)

            printf "${RED}Error:${RESET} unsupported source file.\n"
            exit 1
            ;;

    esac

    check_compiler "$COMPILER"

    BUILD_FLAGS=()

    if [[ "$MODE" == "debug" ]]; then
        BUILD_FLAGS+=("${DEBUG_FLAGS[@]}")
    else
        BUILD_FLAGS+=("${RELEASE_FLAGS[@]}")
    fi

    printf "${BLUE}Compiling...${RESET}\n"

    printf "Compiler : %s\n" "$COMPILER"
    printf "Mode     : %s\n" "$MODE"
    printf "Output   : %s\n\n" "$OUT"

    if "$COMPILER" \
        "$STD" \
        "${COMMON_WARNINGS[@]}" \
        "${EXTRA_FLAGS[@]}" \
        "${BUILD_FLAGS[@]}" \
        "$FILE" \
        -o "$OUT"
    then

        printf "\n${GREEN}Build completed successfully.${RESET}\n"

        if $RUN_AFTER; then

            printf "\n${YELLOW}Running executable...${RESET}\n\n"

            "./$OUT"

        fi

    else

        printf "\n${RED}Compilation failed.${RESET}\n"
        exit 1

    fi

}

###############################################################################
# Remove generated executables
###############################################################################

clean() {

    rm -f *.out

    printf "${GREEN}Generated executables removed.${RESET}\n"

}

###############################################################################
# Parse command-line arguments
###############################################################################

FILE=""

while [[ $# -gt 0 ]]; do

    case "$1" in

        --release)

            MODE="release"
            ;;

        --run)

            RUN_AFTER=true
            ;;

        --clean)

            CLEAN=true
            ;;

        -h|--help)

            usage
            exit 0
            ;;

        *)

            FILE="$1"
            ;;

    esac

    shift

done

###############################################################################
# Main
###############################################################################

if $CLEAN; then
    clean
    exit 0
fi

if [[ -z "$FILE" ]]; then
    usage
    exit 1
fi

compile "$FILE"
