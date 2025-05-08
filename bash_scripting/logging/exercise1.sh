#!/bin/bash
RAND_NUM=$RANDOM
log() {
    echo "This is a random number: $RAND_NUM" >> ./logfile.log
}

log
