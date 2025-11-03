#include<stdio.h>
int main(){
    int num = 100, *ptr;
    ptr = &num;
    printf("Before update : %d\n", num);
    *ptr = 25;
    printf("After update : %d\n", num);
    
    return 0;
}

output
Before update : 100
After update : 25
