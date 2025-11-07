#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insertEnd(int value) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}
void deleteAtPosition(int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    if (pos == 1) {
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position!\n");
        return;
    }
    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}
void display() {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    printf("Before deletion:\n");
    display();
    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    deleteAtPosition(pos);
    printf("After deletion:\n");
    display();
    return 0;
}
Output:
Before deletion:
Linked List: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
Enter position to delete: 3
After deletion:
Linked List: 10 -> 20 -> 40 -> 50 -> NULL
