//Dynamically allocate two sorted arrays, merge them into one sorted array without duplicates, and shrink memory using realloc.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, i = 0, j = 0, k = 0;
    printf("Enter sizes of two sorted arrays: ");
    scanf("%d%d", &n1, &n2);

    int *a = malloc(n1 * sizeof(int));
    int *b = malloc(n2 * sizeof(int));

    printf("Enter %d sorted elements for A:\n", n1);
    for (i = 0; i < n1; i++) scanf("%d", a + i);

    printf("Enter %d sorted elements for B:\n", n2);
    for (i = 0; i < n2; i++) scanf("%d", b + i);

    int *c = malloc((n1 + n2) * sizeof(int));
    i = j = 0;
    while (i < n1 && j < n2) {
        int val = (a[i] < b[j]) ? a[i++] : (a[i] > b[j]) ? b[j++] : (a[i], i++, b[j++]);
        if (k == 0 || val != c[k - 1]) c[k++] = val;
    }
    while (i < n1) if (k == 0 || a[i] != c[k - 1]) c[k++] = a[i++];
    while (j < n2) if (k == 0 || b[j] != c[k - 1]) c[k++] = b[j++];

    c = realloc(c, k * sizeof(int)); // shrink to fit

    printf("\nMerged array without duplicates:\n");
    for (i = 0; i < k; i++) printf("%d ", c[i]);

    free(a); free(b); free(c);
    return 0;
}

output
Enter sizes of two sorted arrays: 4 5
Enter 4 sorted elements for A:
1 3 5 7
Enter 5 sorted elements for B:
2 3 5 6 8

Merged array without duplicates:
1 2 3 5 6 7 8

