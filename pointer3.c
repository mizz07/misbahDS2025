#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr = arr;
    printf("First element : %d\n" ,*ptr);
    ptr++;
    printf("second element : %d\n",*ptr);
    ptr += 2;
    printf("Fourth element : %d\n",*ptr);
    
    return 0;
}

output
First element : 10
second element : 20
Fourth element : 40

