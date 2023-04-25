#!/bin/bash

if [ "$#" -lt 1 ]
then
    echo "No arguments supplied"
else
    i=1
    while [ "$i" -lt 4 ]
    do
        echo "${!i}"
        i=$((i+1))
    done
fi

