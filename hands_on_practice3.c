//Allocate an R x C matrix using a single malloc, input elements, and print its transpose. If non-square, allocate new memory.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    printf("Enter rows and columns: ");
    scanf("%d%d", &R, &C);

    int *mat = malloc(R * C * sizeof(int));

    printf("Enter elements:\n");
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", mat + i * C + j);

    // If not square, allocate new memory for transpose
    int *trans = (R == C) ? mat : malloc(C * R * sizeof(int));

    printf("\nTranspose:\n");
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            int val = *(mat + j * C + i);
            if (R != C) *(trans + i * R + j) = val;
            printf("%d ", val);
        }
        printf("\n");
    }

    if (R != C) free(trans);
    free(mat);
    return 0;
}


output
Enter rows and columns: 2 3
Enter elements:
1 2 3
4 5 6

Transpose:
1 4
2 5
3 6
