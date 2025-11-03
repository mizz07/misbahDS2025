//Allocate a W x H grayscale image buffer using malloc, create get(x,y) and set(x,y,val), print matrix, free memory.
#include <stdio.h>
#include <stdlib.h>

int W, H, *img;

int get(int x, int y) { return *(img + y * W + x); }
void set(int x, int y, int val) { *(img + y * W + x) = val; }

int main() {
    printf("Enter width and height: ");
    scanf("%d%d", &W, &H);

    img = malloc(W * H * sizeof(int));

    printf("Enter pixel values:\n");
    for (int y = 0; y < H; y++)
        for (int x = 0; x < W; x++)
            scanf("%d", img + y * W + x);

    printf("\nImage matrix:\n");
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++)
            printf("%3d ", get(x, y));
        printf("\n");
    }

    free(img);
    return 0;
}


output
Enter width and height: 3 2
Enter pixel values:
10 20 30
40 50 60

Image matrix:
 10  20  30 
 40  50  60
