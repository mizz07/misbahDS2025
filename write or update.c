  //write or update
  #include<stdio.h>
  int main()
  {
      int arr[]={1,2,3,4,5};
      int n=sizeof(arr)/sizeof(arr[0]);
      int index=1;
      int newvalue=10;
      if(index>=0 && index<n){
          arr[index]=newvalue;
          for(int i=0;i<n;i++){
              printf("%d ",arr[i]);
          }
          
      }
      else 
      {
          printf("Invalid range!!");
      }
  }
