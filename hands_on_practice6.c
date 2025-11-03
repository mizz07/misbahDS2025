//Create a singly linked list dynamically and delete the k-th node from the end using pointer technique. Free all nodes.
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* add(Node *head, int val) {
    Node *n = malloc(sizeof(Node));
    n->data = val; n->next = head;
    return n;
}

void delKthFromEnd(Node **head, int k) {
    Node *fast = *head, *slow = *head, *prev = NULL;
    for (int i = 0; i < k; i++) fast = fast->next;
    while (fast) fast = fast->next, prev = slow, slow = slow->next;
    if (!prev) *head = slow->next; else prev->next = slow->next;
    free(slow);
}

int main() {
    Node *head = NULL;
    for (int i = 5; i >= 1; i--) head = add(head, i);
    delKthFromEnd(&head, 2);  // delete 2nd node from end
    for (Node *p = head; p; p = p->next) printf("%d ", p->data);
    while (head) { Node *t = head; head = head->next; free(t); }
    return 0;
}

output
1 2 3 5

