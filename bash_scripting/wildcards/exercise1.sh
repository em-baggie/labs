#!/bin/bash
shopt -s nullglob # enable nullglob so if no matches found, it returns an empty 
TODAY=$(date +%Y%m%d)
for FILE in "*.jpg"
do
    if [ -f "$FILE" ]
    then
        NEW_NAME="${TODAY}${FILE}"
        mv "$FILE" "$NEW_NAME"
        echo "Renamed $FILE to $NEW_NAME"
    else
        echo "No JPG files found"
    fi
done