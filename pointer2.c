#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=7 , y=15;
    printf("Before swapping: x= %d , y= %d\n", x , y);
    swap(&x , &y);
    printf("After swapping: x= %d , y= %d\n", x , y);
    
    return 0;
}

output
Before swapping: x= 7 , y= 15
After swapping: x= 15 , y= 7
