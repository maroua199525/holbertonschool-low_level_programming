#!/bin/bash
gcc -Wall -Werror -Wextra and -pedantic -c *.c
ar -rc liball.a *.o
