#!/bin/bash
NEW_NAME=$1

if [ -f $NEW_NAME ]; then
  echo "$NEW_NAME is a regular file"
elif [ -d $NEW_NAME ]; then
  echo "$NEW_NAME is a directory"
  ls -l $NEW_NAME
else
  echo "$NEW_NAME is not a regular file or directory"
  ls -l $NEW_NAME
fi