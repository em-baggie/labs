#!/bin/bash
MESSAGE="Shell scripting is fun!"
echo $MESSAGE

NAME="$(hostname)"
echo "You are running this script on ${NAME}"

if [ -e /etc/shadow ]; then
  echo "shadow passwords are enabled"
  if [ -w /etc/shadow ]; then
    echo "you have permissions to edit /etc/shadow"
  else
    echo "you do not have permissions to edit /etc/shadow"
  fi
fi

THINGS=("man bear pig dog cat")

for THING in $THINGS
do
  echo "$THING"
done



