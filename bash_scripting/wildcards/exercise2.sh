#!/bin/bash
read -p "Please enter a file extension: " EXT
read -p "Please enter a file prefix: (Press ENTER for 20250423)" PREFIX
if [ -z "$PREFIX" ]; then
    PREFIX=$(date +%Y%m%d)
fi
for FILE in *"$EXT"
do
    OLD_NAME="$FILE"
    NEW_NAME="${PREFIX}${FILE}"
    echo "Renaming $OLD_NAME to $NEW_NAME"
    mv "$OLD_NAME" "$NEW_NAME"
done