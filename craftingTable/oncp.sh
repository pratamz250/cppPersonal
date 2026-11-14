#!/usr/bin/env bash
###############################################################################
# oncp.sh
# A directory starter for Competitive Programming
#
# Author     : pratamz250
# License    : MIT
# Repository : https://github.com/pratamz250/cppPersonal/blob/main/craftingTable/oncp.sh
# Note       : slops de IA sao uteis, sim!
#
# Default behavior:
#   • Create a.cpp as a copy of the configured template
#   • Create empty in.txt, out.txt and mout.txt
#
# Options:
#   --dir PATH      Use PATH as the template directory for this invocation
#   -n COUNT        Create COUNT source files (a.cpp, b.cpp, c.cpp, ...)
#   -t INDEX        Create only tINDEX.cpp from the configured template
#   -c NAME         Create NAME.cpp from the configured template
#   -h, --help      Show this help
#
# How to use:
#   1. Set TEMPLATE_DIR below to the directory containing your template file.
#   2. chmod +x oncp.sh
#   3. mkdir -p ~/.local/bin
#   4. mv oncp.sh ~/.local/bin/oncp.sh
#   5. source ~/.profile
#   6. Run oncp.sh, oncp.sh --dir /path/to/template, oncp.sh -n 3,
#      or oncp.sh --t binary_search
###############################################################################

set -Eeuo pipefail

# Configure this path: it must contain the template source file.
TEMPLATE_DIR="$HOME/cppPersonal/craftingTable"
TEMPLATE_FILE="cabecalho.txt"

# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

usage() {
    cat <<'EOF'
Usage:
  $ oncp.sh                 Create a.cpp and empty in.txt, out.txt, mout.txt
  $ oncp.sh --dir PATH      Use PATH as the template directory for this invocation
  $ oncp.sh -n COUNT        Create COUNT source files: a.cpp, b.cpp, c.cpp, ...
  $ oncp.sh -t INDEX        Create only tINDEX.cpp
  $ oncp.sh -c NAME         Create NAME.cpp from the configured template
  $ oncp.sh -h, --help      Show this help

Configuration:
  Edit TEMPLATE_DIR and TEMPLATE_FILE near the top of the oncp script.
  The template file must exist inside TEMPLATE_DIR.

Examples:
  $ oncp.sh
  $ oncp.sh --dir "$HOME/templates/cpp"
  $ oncp.sh -n 3
  $ oncp.sh -t 1
  $ oncp.sh -t buscabinaria
  $ oncp.sh -c dijkstra

Notes:
  --dir changes the template directory only for that execution.
  The -n mode creates input/output files as well as the requested .cpp files.
  The -t mode creates only the requested tINDEX.cpp file.
  The -c mode creates only the requested NAME.cpp file.
  Existing files with the same names are overwritten.
EOF
}

error() {
    printf 'oncp.sh: erro: %s\n' "$*" >&2
    exit 1
}

resolve_template() {
    local dir=$1
    local template="$dir/$TEMPLATE_FILE"

    [[ -d "$dir" ]] || error "template directory not found: $dir"
    [[ -f "$template" ]] || error "template file not found: $template"
    [[ -r "$template" ]] || error "no read permission: $template"

    printf '%s\n' "$template"
}

copy_template() {
    local source=$1
    local destination=$2

    cp -- "$source" "$destination" ||
        error "unable to copy the template to: $destination"
}

create_empty_files() {
    : > in.txt
    : > out.txt
    : > mout.txt
}

# ---------------------------------------------------------------------------
# Argument parsing and execution
# ---------------------------------------------------------------------------

mode="default"
custom_dir=""
count=""
test_index=""
custom_name=""

if (($# == 0)); then
    mode="default"
elif (($# == 1)) && [[ "$1" == "-h" || "$1" == "--help" ]]; then
    usage
    exit 0
elif (($# == 2)) && [[ "$1" == "--dir" ]]; then
    mode="dir"
    custom_dir=$2
elif (($# == 2)) && [[ "$1" == "-n" ]]; then
    mode="multiple"
    count=$2
elif (($# == 2)) && [[ "$1" == "-t" ]]; then
    mode="test"
    test_index=$2
elif (($# == 2)) && [[ "$1" == "-c" ]]; then
    mode="custom"
    custom_name=$2
else
    usage >&2
    error "invalid arguments"
fi

template_dir=$TEMPLATE_DIR
if [[ "$mode" == "dir" ]]; then
    [[ -n "$custom_dir" ]] || error "provide a path after --dir"
    template_dir=$custom_dir
fi

template_path=$(resolve_template "$template_dir")

case "$mode" in
    default|dir)
        copy_template "$template_path" a.cpp
        create_empty_files
        printf 'Created files: a.cpp, in.txt, out.txt, mout.txt\n'
        ;;

    multiple)
        [[ "$count" =~ ^[1-9][0-9]*$ ]] ||
            error "COUNT must be a positive integer"

        (( count <= 26 )) ||
            error "COUNT must be at most 26 (a.cpp to z.cpp)"

        letters=( {a..z} )
        for ((i = 0; i < count; i++)); do
            copy_template "$template_path" "${letters[i]}.cpp"
        done

        create_empty_files
        printf 'Created %s file(s) .cpp and in.txt, out.txt, mout.txt\n' "$count"
        ;;

    test)
        [[ -n "$test_index" ]] || error "provide an index after -t"
        [[ "$test_index" != */* ]] ||
            error "the index of -t cannot have '/'"

        copy_template "$template_path" "t${test_index}.cpp"
        printf 'Created file: t%s.cpp\n' "$test_index"
        ;;

    custom)
        [[ -n "$custom_name" ]] || error "provide a name after -c"
        [[ "$custom_name" != */* ]] ||
            error "the name after -c cannot have '/'"

        copy_template "$template_path" "${custom_name}.cpp"
        printf 'Created file: %s.cpp\n' "$custom_name"
        ;;
esac

