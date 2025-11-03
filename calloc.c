2. Using calloc()
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n = 5;
    ptr = (int*) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]); // all values 0 initially

    free(ptr);
    return 0;
}
