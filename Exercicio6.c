#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
   int data;
   struct Node *next;

} Node;

struct node* divideList(struct node* L, int n){
   //Dois ponteiros pro topo da lista
   struct Node* current = L;
   struct Node* second = NULL;

   //Percorrer a lista ate a segunda ocorrencia de n ou o final da lista
   while (current != NULL && current-> next != NULL){
      if(current->next->data = n){
         //Dividir a lista alterando o proximo ponteiro do nó atual
         second = current->next;
         current->next = current->next->next;
      }
      current = current->next;
   }

   //Retornar o pontero para a segunda sublista
   return second;
}

//funçao para copiar a lista 
void printList(struct Node* L){
   while (L != NULL){
      printf("%d ->" , L->data);
      L = L->next;
   }
   printf("NULL\n");
}

//funçao para criar uma nova lista
struct Node* creatList(int arr[], int n) {
   //criar uma cabeça para o nó e inicializar em NULL
   struct Node* head = NULL;
   struct Node* temp = NULL;
   struct Node* current = NULL;


   //alocar a memoria para a cabeça do nó e inicializar ele
   head = (struct Node*)malloc(sizeof (Node));
   head->data = arr[0];
   head->next = NULL;
   current = head;

   //Alocar memoria para os nós restantes e inicializar eles
   for(int i = 1; i < n; i++) {
      temp = (struct Node*)malloc(sizeof(struct Node));
      temp->data = arr[i];
      temp->next = NULL;
      current->next= temp;
      current = temp;
   }
   
   return head;
}

//Parte da sofrencia kkk (driver code)
int main(){
   //iniciar a ista com os numeros 1,2,3,4,5,6,7,8,9,10
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int n = sizeof(arr) / sizeof(arr[0]);
   struct Node* L = creatList(arr, n);

   //Dividir a lsita em duas sublistas da primeira ocorrencia de 5
   struct Node* second = divideList(L, 5);

   printf("Primeira sub-lista: ");
   printList(L);

   printf("Segunda sub-lista: ");
   printList(second);

   return 0;
}



