#!/bin/bash
file_count() {
    local FILE_COUNT=$(ls | wc -l)
    echo "Number of files and directories: $FILE_COUNT"
}

file_count