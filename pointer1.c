//pointer to an integer
#include <stdio.h>

int main() {
    int num = 10;      
    int *ptr;         

    ptr = &num;        

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr : %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}

output
Value of num: 10
Address of num: 0x7fff6daf5d64
Value stored in ptr : 0x7fff6daf5d64
Value pointed to by ptr: 10
