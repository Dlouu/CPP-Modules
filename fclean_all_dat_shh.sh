#!/bin/bash

find . -type d | while read dir; do
    if [ -f "$dir/Makefile" ]; then
        echo "Entering directory: $dir"
        (cd "$dir" && make fclean)
        if [ $? -ne 0 ]; then
            echo "Failed to execute 'make fclean' in $dir"
        else
            echo "'make fclean' succeeded in $dir"
        fi
    fi
done