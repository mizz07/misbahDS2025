#include<stdio.h>
#include<stdlib.h>
//Node creation by using structure
struct Node{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
int main(){
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=NULL;
    printf(" node data is:%d ",head->data);
    
}
