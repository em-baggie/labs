#!/bin/bash
file_count() {
    local FILE_COUNT=$(ls "$1" | wc -l)
    echo -e "$1\n$FILE_COUNT"
}

file_count /etc
file_count /usr/bin
file_count /c/courses/bash_scripting/scripts/exercises/basics