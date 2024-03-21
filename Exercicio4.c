#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

//Obter numero de vetores
Node* buildlist(int* V, int N){
    Node * head = NULL;
    Node ** current = &head;

    for (int i = 0; i < N; i++){
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = V[i];
        newNode->next = NULL;

        *current = newNode;
        current = &((*current)->next);
    }

    return head;

}

int main() {
    int V[] = {4,1,5,9,13,26};
    int N = sizeof(V) / sizeof(V[0]);

    Node* list = buildlist(V, N);

    //Lista vinculada
    Node *temp = list;
    while (temp != NULL) {
        printf("%d -> " , temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;

}
