#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library (liball.a) from the compiled .o files
ar rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

