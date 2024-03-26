#include <stdio.h>
#include <stdlib.h>


typedef struct node{
int value;
struct node *next;
} node;

node* copylist(node* originallist){
    node* newlist = NULL;
    node* newnode = NULL;
    node* current = originallist;

    while (current != NULL){
        newnode = (node*)malloc(sizeof(node));
        if (newnode = NULL){
            return NULL;
        }
        newnode->value = current->value;
        newnode->next = NULL;

        if (newlist = NULL){
            newlist = newnode;
        } else {
            node* lastnode = newlist;
            while (lastnode-> next != NULL){
                lastnode = lastnode->next;
            }
            lastnode->next = newnode;
        }

        current = current->next;
    }
    return newlist;
}

int main(){
    node* list = NULL;
    node* firstnode = NULL;
    node*copiedlist = NULL;

    //Lista simples
    firstnode->(node*)malloc(sizeof(node));
    firstnode->value = 10;
    firstnode->next = NULL;
    list=firstnode;

    node* secondnode = (node*)malloc(sizeof(node));
    secondnode->value = 20;
    secondnode->next = NULL;
    firstnode->next = secondnode;

    node* thirdnode = (node*)malloc(sizeof(node));
    thirdnode->value = 30;
    thirdnode->next = NULL;
    secondnode->next = thirdnode;

    copiedlist = copylist(list);
}