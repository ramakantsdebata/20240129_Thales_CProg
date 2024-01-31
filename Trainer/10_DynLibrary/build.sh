gcc -Wall -Wextra -g -std=c99  -fPIC   -c add.c subtract.c -I ./include/
gcc -shared -o libmmath.so add.o subtract.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH