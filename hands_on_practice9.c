//Implement char** split(char *str, char delim, int *count) using dynamic allocation and realloc for tokens
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** split(char *s, char d, int *n) {
    char **res = NULL, *p = s, *q = s;
    *n = 0;
    while (1) {
        if (*q == d || *q == '\0') {
            int len = q - p;
            char *w = malloc(len + 1);
            strncpy(w, p, len);
            w[len] = '\0';
            res = realloc(res, (++*n) * sizeof(char*));
            res[*n - 1] = w;
            if (*q == '\0') break;
            p = q + 1;
        }
        q++;
    }
    return res;
}

int main() {
    char str[] = "one,two,three";
    int n;
    char **out = split(str, ',', &n);
    for (int i = 0; i < n; i++) printf("%s\n", out[i]), free(out[i]);
    free(out);
    return 0;
}


output
one
two
three


    
          
