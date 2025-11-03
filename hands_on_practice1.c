#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, sum = 0, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));  // allocate memory

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", arr + i);

    max = *arr;
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
        if (*(arr + i) > max)
            max = *(arr + i);
    }

    printf("\nSum = %d\nMaximum = %d\n", sum, max);
    free(arr);  // free memory

    return 0;
}


output
Enter number of elements: 5
Enter 5 numbers:
10 25 5 30 15

Sum = 85
Maximum = 30
