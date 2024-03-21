#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int *value;
    struct node *next;
} node;

node* concatena(node* L1, node* L2) {
    node* result = L2;
    node* current = L1;

    //final da L2
    while (result->next != NULL){
        result = result->next;
    }

    //concatenar a L1 ate o final da L2
    result->next = current;

    return L2;
}

int main(){
    node* list1 = NULL;
    node* firstnode1 = NULL;

    //criar a lista 1 de forma SIMPLES OK? KKKK
    firstnode1= (node*)malloc(sizeof(node));
    firstnode1->value = 10;
    firstnode1->next = NULL;
    list1 = firstnode1;

    node* secondnode1 = (node*)malloc(sizeof(node));
    secondnode1->value = 20;
    secondnode1->next = NULL;
    firstnode1->next = secondnode1;

    node* thirdnode1 = (node*)malloc(sizeof(node));
    thirdnode1->value = 30;
    thirdnode1->next = NULL;
    secondnode1->next = thirdnode1;

    node* list2 = NULL;
    node* firstnode = NULL;

    //criar a lista 2 de forma SIMPLES DNV KKK
    firstnode2 = (node*)malloc(sizeof(node));
    firstnode2->value = 40;
    firstnode2->next = NULL;
    list2 = firstnode2;

    node* secondnode2 = (node*)malloc(sizeof(node));
    secondnode2->value = 50;
    secondnode2->next = NULL;
    firstnode2->next = secondnode2;

    //concatenar lista 1 ate o final da lista 2
    node* result = concatena(list1, list2);

    //resultado da lista
    node* current = result;
    printf("O paramentro recebido foi de: " , concatena);
    

}


