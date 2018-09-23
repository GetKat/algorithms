#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void append(struct node **h, int n);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
    append(&head, 10);
    show_content(head);
    append(&head, 66);
    show_content(head);
}

void append(struct node **h, int n){
    struct node *aux = *h;
    if(*h == (struct node *) NULL){
        (*h) = (struct node *) malloc(sizeof(struct node));
        (*h)->data = n;
        (*h)->next = (struct node *) NULL;
    }
    else{
        if(aux->next != (struct node *) NULL){
            aux = aux->next;
            append(&aux, n);
        }
        else{
            aux->next = (struct node *) malloc(sizeof(struct node));
            aux = aux->next;
            aux->data = n;
            aux->next = (struct node *) NULL;
            aux = (struct node *) NULL;
        }
    }
}