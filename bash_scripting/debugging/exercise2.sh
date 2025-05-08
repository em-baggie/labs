# Modify the previous exercise so that script continues, even if an error occurs. This time all three ls commands will execute.

#!/bin/bash 
set -x
ls /
ls /nonexistent_directory
ls /



