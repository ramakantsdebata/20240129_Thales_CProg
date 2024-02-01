#include <stdio.h>
#include <pthread.h>

int regularCounter = 0;

_Atomic int atomicCounter = 0;

void* incrementRegularCounter(void* arg) 
{
    for (int i = 0; i < 100000; ++i) 
    {
        regularCounter++;
    }
    return NULL;
}

void* incrementAtomicCounter(void* arg) 
{
    for (int i = 0; i < 100000; ++i) 
    {
        atomicCounter++;
    }
    return NULL;
}

int main() 
{
    pthread_t regularThread1, regularThread2;
    pthread_t atomicThread1, atomicThread2;

    pthread_create(&regularThread1, NULL, incrementRegularCounter, NULL);
    pthread_create(&regularThread2, NULL, incrementRegularCounter, NULL);

    pthread_create(&atomicThread1, NULL, incrementAtomicCounter, NULL);
    pthread_create(&atomicThread2, NULL, incrementAtomicCounter, NULL);

    pthread_join(regularThread1, NULL);
    pthread_join(regularThread2, NULL);
    pthread_join(atomicThread1, NULL);
    pthread_join(atomicThread2, NULL);

    printf("Final Regular Counter Value: %d\n", regularCounter);
    printf("Final Atomic Counter Value: %d\n", atomicCounter);

    return 0;
}
