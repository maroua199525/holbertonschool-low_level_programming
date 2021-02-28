#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c

ar -cvq liball.a *.o

