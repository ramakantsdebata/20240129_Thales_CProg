# Build the library in the Lib project space #####################################
# gcc -Wall -Wextra -g -std=c99 -fPIC -c add.c subtract.c -I ./include/
# gcc -shared add.o subtract.o -o libmmath.so
# export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH


# Build the consumer in the Consumer project space
gcc -Wall -Wextra -g -std=c99 client.c -o client.o -I ../10_DynLibrary/include/ -L ../10_DynLibrary/ -lmmath
