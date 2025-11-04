//insert at the end of array
   #include<stdio.h>
   #define CAP 100
   int main()
   {
       int a[CAP]={10,20,30};
       int n=3;
       int x=40;
       if(n<CAP){
           a[n]=x;
           n++;
       }
       else
       {
           printf("Array is full");
       }
       for(int i=0;i<n;i++)
       printf("%d ",a[i]);
   }
   
