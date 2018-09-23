#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void cria_lista_inv(struct node **h);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
}

void cria_lista_inv(struct node **h){
    struct node *aux;
    int n;
    aux = *h = (struct node *) NULL;
    while(scanf("%d", &n), n){
        aux = (struct node *) malloc(sizeof(struct node));
        aux->data = n;
        aux->next = *h;
        *h = aux;
        aux = (struct node *) NULL;
    }
}