#!/bin/bash
FILES_OR_DIRECTORIES=$@

for FILE_OR_DIRECTORY in $FILES_OR_DIRECTORIES
do
  if [ -f $FILE_OR_DIRECTORY ]; then
    echo "$FILE_OR_DIRECTORY is a regular file"
  elif [ -d $FILE_OR_DIRECTORY ]; then
    echo "$FILE_OR_DIRECTORY is a directory"
    ls -l $FILE_OR_DIRECTORY
  else
    echo "$FILE_OR_DIRECTORY is not a regular file or directory"
    ls -l $FILE_OR_DIRECTORY
  fi
done