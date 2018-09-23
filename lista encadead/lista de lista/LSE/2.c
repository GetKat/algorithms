#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void cria_lista_inv(struct node **head);

int main(){
    struct node *head = (struct node *) NULL;
    cria_lista_inv(&head);
    show_content(head);
}

void cria_lista_inv(struct node **head){
    struct node *aux = (struct node *) NULL;
    int n;
    scanf("%d", &n);
    if(n){
        aux = (struct node *) malloc(sizeof(struct node));
        aux->data = n;
        aux->next = *head;
        *head = aux;
        aux = (struct node *) NULL;
        cria_lista_inv(head);
    }
}