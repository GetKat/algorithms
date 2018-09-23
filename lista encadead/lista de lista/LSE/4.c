#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void cria_lista_inv(struct node **h);
void show_content_rec(struct node *h);

int main(){
    struct node *head = (struct node *) NULL;
    cria_lista_inv(&head);
    show_content_rec(head);
}

void show_content_rec(struct node *h){
    if(h != (struct node *) NULL){
        printf("%d -> ", h->data);
        h = h->next;
        show_content_rec(h);
    }
    else
        printf("NULL\n");
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
