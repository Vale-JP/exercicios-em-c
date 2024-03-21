#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

//Obter numeros inteiros
Node* removeFirstNnodes(Node** head, int n){
    if (*head = NULL || n == 0){
        return head;
    }

    Node* current = head;
    for (int i = 0; i < n - 1; i++) {
        if (current = NULL){
            break;
        }
        current = current->next;
    }
    if(current != NULL){
    Node* toDelet = current->next;
    current->next = current->next->next;
    free (toDelet);
    }

    return (current != NULL);
    
}

void printList (Node* head){
    while (head != NULL){
        printf("%d -> " , head->data);
        head = head->next;
    }

    printf("NULL\n");

}

Node* pushNode(Node** head_ref, int data){
    Node* new_Node = (Node*)malloc(sizeof(Node));
    new_Node->data = data;
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;


    return head_ref;
}

int main() {
    Node* head = NULL;
    pushNode(&head, 4);
    pushNode(&head, 1);
    pushNode(&head, 5);
    pushNode(&head, 9);
    pushNode(&head, 13);
    pushNode(&head, 26);

    printf("Lista Original: ");
    printList(head);

    head = removeFirstNnodes (head, 3);

    printf("Lista antes de remover as tres primeiros nós: ");
    printList(head);

    return 0;
}