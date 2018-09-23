#include <stdio.h>
#include <stdlib.h>
#include "node.h"

//using append_sort() from 13
void append_sort(struct node **h, int n);
void unir(struct node **first, struct node **sec);

int main(){
    struct node *um, *dois, *tres = (struct node *) NULL;
    cria_list_ord(&um);
    cria_list_ord(&dois);
    show_content(um);
    show_content(dois);
    unir(&um, &tres);
    unir(&dois, &tres);
    show_content(tres);
}

//unir bota os elementos de first em second seguindo a ordem crescente
void unir(struct node **first, struct node **sec){
    struct node *aux = *first;
    while(aux != (struct node *) NULL){
        append_sort(sec, aux->data);
        aux = aux->next;
    }
}

void append_sort(struct node **h, int n){
    struct node *prev, *aux = *h, *novo;
    if(*h == (struct node *) NULL){ //lista ta vazia
        *h = (struct node *) malloc(sizeof(struct node));
        (*h)->data = n;
        (*h)->next = (struct node *) NULL;
    }
    else if((*h)->data > n){ //adiciona no inicio
        aux = (struct node *) malloc(sizeof(struct node));
        aux->data = n;
        aux->next = *h;
        *h = aux;
    }
    else{
        // navega ate o primeiro nodo onde o valor eh maior (so consegue ir ate o ultimo nodo)
        while(aux->data <= n && aux->next != (struct node *) NULL){
            prev = aux;
            aux = aux->next;
        }
        // cria um novo nodo e bota ele entre aux e prev (aux->data eh o primeiro valor maior que o elemento a ser adicionado)
        if(aux->data > n){
            novo = (struct node *) malloc(sizeof(struct node));
            novo->data = n;
            novo->next = aux;
            prev->next = novo;
        }
        // se o dado do nodo atual for menor que o valor a ser adicionado significa que ele nao achou nenhum nodo onde o valor eh maior
        // ou seja, ele navegou ate o ultimo nodo e o elemento deve ser inserido no final da lista
        else{
            novo = (struct node *) malloc(sizeof(struct node));
            novo->data = n;
            novo->next = (struct node *) NULL;
            aux->next = novo;
        }
        novo = aux = prev = (struct node *) NULL;
    }
}