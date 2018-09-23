#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void erase(struct node **h);

int main(){
    struct node *head;
    cria_list_ord(&head);
    show_content(head);
    erase(&head);
    show_content(head);
}

void erase(struct node **h){
    struct node *aux = *h, *novo;

    while(aux != (struct node *) NULL){
        novo = aux;
        aux = aux->next;
        free(novo);
    }
    *h = (struct node *) NULL;
    novo = aux = (struct node *) NULL;
}