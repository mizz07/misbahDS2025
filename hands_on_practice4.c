//Implement a dynamic array (like vector) using realloc with push() function that doubles capacity when full.
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size, cap;
} DynArray;

void init(DynArray *a) {
    a->size = 0;
    a->cap = 2;
    a->data = malloc(a->cap * sizeof(int));
}

void push(DynArray *a, int val) {
    if (a->size == a->cap) {
        a->cap *= 2;
        a->data = realloc(a->data, a->cap * sizeof(int));
    }
    a->data[a->size++] = val;
}

void print(DynArray *a) {
    for (int i = 0; i < a->size; i++)
        printf("%d ", a->data[i]);
    printf("\n");
}

int main() {
    DynArray arr;
    init(&arr);

    for (int i = 1; i <= 10; i++)
        push(&arr, i);

    printf("Dynamic array: ");
    print(&arr);

    free(arr.data);
    return 0;
}

output
Dynamic array: 1 2 3 4 5 6 7 8 9 10
