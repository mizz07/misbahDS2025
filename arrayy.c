//Reading the element using array
  #include<stdio.h>
  int main()
  {
      int arr[]={1,2,3,4,5};
      int n=sizeof(arr)/sizeof(arr[0]);
      int index=4;
      if(index>=0 && index<n ){
      printf("%d",arr[index]);
      }
      else
      {
          printf("Invalid range!!");
      }
  }
  
