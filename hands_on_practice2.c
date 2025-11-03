//Implement your own char* my_strdup(char *src) using malloc and pointer copying.     
#include <stdio.h>
#include <stdlib.h>

char* my_strdup(char *src) {
    char *dup;
    int len = 0;

    // find length
    while (*(src + len))
        len++;

    dup = malloc(len + 1); // +1 for '\0'
    if (!dup) return NULL;

    // copy characters
    for (int i = 0; i <= len; i++)
        *(dup + i) = *(src + i);

    return dup;
}

int main() {
    char str[] = "Hello C!";
    char *copy = my_strdup(str);

    if (copy) {
        printf("Original: %s\nCopy: %s\n", str, copy);
        free(copy);
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}

output
Original: Hello C!
Copy: Hello C!

