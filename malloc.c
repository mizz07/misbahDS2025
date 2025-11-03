1. Allocate memory for an array of integers and print them
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n = 5;
    ptr = (int*) malloc(n * sizeof(int));  // allocate memory

    for(int i = 0; i < n; i++)
        ptr[i] = i + 1;  // store values

    for(int i = 0; i < n; i++)
        printf("%d ", ptr[i]);  // print values

    free(ptr);  // free memory
    return 0;
}


Output:

1 2 3 4 5
