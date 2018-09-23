#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void delete_element(struct node **h, int n);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
    delete_element(&head, 10);
    show_content(head);
}

void delete_element(struct node **h, int n){
    struct node *aux = *h, *prev = (struct node *) NULL;

    while(aux->data != n && aux != (struct node *) NULL){
        prev = aux;
        aux = aux->next;
    }

    if((*h)->data == n){
        aux = *h;
        *h = (*h)->next;
        free(aux);
    }
    else if(aux->data == n){
        prev->next = aux->next;
        aux->next = (struct node *) NULL;
        free(aux);
    }

}