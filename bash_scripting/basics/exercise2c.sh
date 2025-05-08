#!/bin/bash
cat exercise2b.sh
if [ $? = 0 ]
then
    echo "command succeeded"
    exit 0
else
    echo "command failed"
    exit 1
fi