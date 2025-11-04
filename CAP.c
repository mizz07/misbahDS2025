//Fixed capacity by using macro function called CAP
#include<stdio.h>
#define CAP 100
void fun(int a[], int n);
void fun(int a[CAP], int n){
    for(int i=0;i < n && i < CAP;i++){
        a[i]=i;
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[CAP ],n=130;
    fun(a,n);
}
