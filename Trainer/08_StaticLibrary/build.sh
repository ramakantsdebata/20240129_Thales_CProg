gcc -Wall -Wextra -g -std=c99  -c add.c subtract.c -I ./include
ar rcs libmmath.a add.o subtract.o
