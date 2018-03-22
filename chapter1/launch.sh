#!/bin/bash
# Author: Kaleb Robert McKone
# Date: 3-22-2018
# Compiles, launches my practice C files and removes output file

if [ $# != 1 ] 
then
    echo "Provide one .c file to compile and run"
else
    echo
    echo "Attemping to compile now."
    echo
    gcc $1
    echo "Compiled. Attemping to launch now."
    echo
    ./a.out
    echo # Extra echo after output from program.
    echo "Run time completed. Removing output file from compiling."
    echo
    rm ./a.out
    echo "Done."
    echo
fi
