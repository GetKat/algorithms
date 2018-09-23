#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void cria_list_ord2(struct node **h, struct node *aux);

int main(){
    struct node *head = (struct node *) NULL;
    cria_list_ord2(&head, (struct node *) NULL);
    show_content(head);
}

void cria_list_ord2(struct node **h, struct node *aux){
    int n;
    scanf("%d", &n);
    if(n){
        if((*h) == (struct node *) NULL){
            (*h) = (struct node *) malloc(sizeof(struct node));
            (*h)->data = n;
            (*h)->next = (struct node *) NULL;
            aux = (*h);
        }
        else{
            aux->next = (struct node *) malloc(sizeof(struct node));
            aux = aux->next;
            aux->data = n;
            aux->next = (struct node *) NULL;
        }
        cria_list_ord2(h, aux);
        aux = (struct node *) NULL;
    }
}