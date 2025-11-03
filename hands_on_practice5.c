//Create a function char* getLine() to read an input string of unknown length using realloc. Return dynamically allocated memory
#include <stdio.h>
#include <stdlib.h>

char* getLine() {
    char *str = NULL;
    int ch, len = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        str = realloc(str, len + 2); // +1 for new char, +1 for '\0'
        str[len++] = ch;
    }
    if (str) str[len] = '\0';
    return str;
}

int main() {
    printf("Enter a line: ");
    char *line = getLine();

    if (line) {
        printf("You entered: %s\n", line);
        free(line);
    } else {
        printf("No input or memory error!\n");
    }
    return 0;
}

output
Enter a line: Hello Dynamic Input!
You entered: Hello Dynamic Input!
