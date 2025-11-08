#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
int main(){
    struct Node* root = malloc(sizeof(struct Node));
    struct Node* leftchild = malloc(sizeof(struct Node));
    struct Node* rightchild = malloc(sizeof(struct Node));
    root->data=1;
    leftchild->data=2;
    rightchild->data=3;
    root->left=leftchild;
    root->right=rightchild;
    leftchild->left=leftchild->right=NULL;
    rightchild->right=leftchild->right=NULL;
    printf("Root:%d\n",root->data);
    printf("Leftchild:%d\n",root->left->data);
    printf("Rightchild:%d\n",root->right->data);
}
