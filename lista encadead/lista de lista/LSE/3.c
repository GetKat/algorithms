#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void show_content(struct node *h);

void show_content(struct node *h){
    struct node *aux = h;
    printf("Lista:\n");
    while(aux != (struct node *) NULL){
        printf("%d -> ", aux->data);
        aux = aux->next;
    } 
    aux = (struct node *) NULL;
    printf("NULL\n");
}