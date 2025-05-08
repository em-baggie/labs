#!/bin/bash
FILE_OR_DIR_NAME = $1

if [ -f "$FILE_OR_DIR_NAME" ] 
then
    echo "$FILE_OR_DIR_NAME is a regular file"
    exit 0
elif [ -d "$FILE_OR_DIR_NAME" ]
then
    echo "$FILE_OR_DIR_NAME is a directory"
    exit 1
else
    echo "$FILE_OR_DIR_NAME is not a regular file or directory"
    exit 2
fi
