#!/bin/bash
CMD=$1

case $CMD in
    start)
        echo "Starting sleepwalking server..."
        /tmp/sleepwalkingserver &  # Start the server in the background
        ;;
    stop)
        kill $(cat /tmp/sleepwalkingserver.pid)  # Stop the server using the PID
        ;;
    *)
        echo "Usage: $0 {start|stop}"  # Display usage instructions
        exit 1
        ;;
esac