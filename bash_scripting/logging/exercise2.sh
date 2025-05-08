#!/bin/bash
RAND_NUM=$RANDOM

log() {
    logger -i -t "randomly" -p user.info "This is a random number: $RAND_NUM"
}

log