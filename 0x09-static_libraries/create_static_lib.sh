#!/bin/bash
gcc -wall -pedantie -Werror -Wextra -c *.c 
ar  -rc liball.a *.o
ranlib liball.a
