#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int data;
    struct celula *prox;
} celula;

// Funçao para obter o numero de celulas na lista encadeada
int obter_numero_de_celulas(celula *lista) {
    int numero_de_celulas = 0;
    celula *atual = lista;

    while (atual != NULL){
        numero_de_celulas++;
        atual = atual->prox;
    }

    return numero_de_celulas;
}

// Funçao para inserir uma nova celula no final da lista encadeada
void inserir_celula(celula **lista, int valor){
    celula *nova_celula = (celula *)malloc(sizeof(celula));
    nova_celula->data = valor;
    nova_celula->prox = NULL;

    if (*lista == NULL){
        *lista = nova_celula;
    } else {
        celula *atual = *lista;
        while (atual->prox != NULL){
            atual->prox = nova_celula;
        }
    }
}

int main(){
    celula *lista = NULL;
    inserir_celula(&lista, 10);
    inserir_celula(&lista, 20);
    inserir_celula(&lista, 30);

    int numero_de_celulas = obter_numero_de_celulas(lista);
    printf("Numero de celulas na lista encadeada: %d\n" , numero_de_celulas);

    return 0;
}