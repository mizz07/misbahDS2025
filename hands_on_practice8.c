//Implement a jagged array for student marks using int**, calculate each student’s average, print topper. Free memory.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, *cnt;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int **marks = malloc(n * sizeof(int*));
    cnt = malloc(n * sizeof(int));
    float *avg = malloc(n * sizeof(float));

    for (i = 0; i < n; i++) {
        printf("Enter subjects for student %d: ", i + 1);
        scanf("%d", &cnt[i]);
        marks[i] = malloc(cnt[i] * sizeof(int));
        int sum = 0;
        printf("Enter %d marks: ", cnt[i]);
        for (j = 0; j < cnt[i]; j++) {
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }
        avg[i] = (float)sum / cnt[i];
    }

    int top = 0;
    for (i = 1; i < n; i++)
        if (avg[i] > avg[top]) top = i;

    printf("\nTopper: Student %d with average %.2f\n", top + 1, avg[top]);

    for (i = 0; i < n; i++) free(marks[i]);
    free(marks); free(cnt); free(avg);
    return 0;
}


output
Enter number of students: 3
Enter subjects for student 1: 3
Enter 3 marks: 80 90 70
Enter subjects for student 2: 2
Enter 2 marks: 85 95
Enter subjects for student 3: 4
Enter 4 marks: 60 75 70 80

Topper: Student 2 with average 90.00
