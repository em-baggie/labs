#!/bin/bash
read -p "Enter a file name or directory name: " NAME

if [ -f $NAME ]; then
  echo "$NAME is a regular file"
elif [ -d $NAME ]; then
  echo "$NAME is a directory"
  ls -l $NAME
else
  echo "$NAME is not a regular file or directory"
  ls -l $NAME
fi