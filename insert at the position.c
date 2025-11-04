//insert the element at the position given
#include<stdio.h>
#define CAP 50
int main()
{
    printf("NAME = MISBAH HARMAIN\n");
    printf("USN = 1SV24CS078\n");
    int a[CAP]={10,20,30,40,50};
    int n=5;
    int x=15;
    int pos=3;
    if(n < CAP && pos >= 0 && pos <= n){
        for(int i=n;i>pos;i--){
            a[i]=a[i-1];
        }
        a[pos]=x;
        n++;
    }
    else
    {
        printf("Invalid");
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    
}
