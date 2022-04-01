#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic *.c
ar rc liball.c *.o
ranlib liball.a
