#!/bin/bash
# Write a shell script that asks the user for the number of lines they would like to display from the /etc/passwd file and display those lines.
FILE="/etc/passwd"
LINE_NUM=1
read -p "How many lines would you like to display from the file " NUM_LINES

while [ $LINE_NUM -le $NUM_LINES ] && read LINE
do
    echo "${LINE}"
    ((LINE_NUM++))
done < "$FILE"