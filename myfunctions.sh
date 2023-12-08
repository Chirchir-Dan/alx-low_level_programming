#!/bin/bash

# Define the source directories for your files
source_dirs=(
    /root/alx-low_level_programming/0x00-hello_world
    /root/alx-low_level_programming/0x01-variables_if_else_while
    /root/alx-low_level_programming/0x02-functions_nested_loops
    /root/alx-low_level_programming/0x03-debugging
    /root/alx-low_level_programming/0x04-more_functions_nested_loops
    /root/alx-low_level_programming/0x05-pointers_arrays_strings
    /root/alx-low_level_programming/0x06-pointers_arrays_strings
    /root/alx-low_level_programming/0x07-pointers_arrays_strings
    /root/alx-low_level_programming/0x08-recursion
)

# Define the destination directory
destination_dir=/root/alx-low_level_programming/0x09-static_libraries

# List the specific files you want to copy
files_to_copy=(
    "0-putchar.c"
    "0-isupper.c"
    "0-memset.c"
    "0-strcat.c"
    "1-isdigit.c"
    "1-memcpy.c"
    "1-strncat.c"
    "2-strchr.c"
    "2-strlen.c"
    "2-strncpy.c"
    "3-islower.c"
    "3-puts.c"
    "3-strcmp.c"
    "3-strspn.c"
    "4-isalpha.c"
    "4-strpbrk.c"
    "5-strstr.c"
    "6-abs.c"
    "9-strcpy.c"
)

# Loop through the source directories
for src_dir in "${source_dirs[@]}"; do
    # Loop through the list of files to copy
    for file in "${files_to_copy[@]}"; do
        # Check if the file exists in the current source directory
        if [ -e "$src_dir/$file" ]; then
            # Copy the file to the destination directory
            cp "$src_dir/$file" "$destination_dir/"
        fi
    done
done

