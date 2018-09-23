#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void delete_element(struct node **h, int n, struct node *aux, struct node *prev);

int main(){
    struct node *head;
    cria_list_ord(&head);
    show_content(head);
    delete_element(&head, 10, head, (struct node *) NULL);
    show_content(head);
}

void delete_element(struct node **h, int n, struct node *aux, struct node *prev){

    if((*h)->data == n){
        aux = *h;
        *h = (*h)->next;
        free(aux);
    }
    else{
        if(aux->data != n && aux != (struct node *) NULL){
            prev = aux;
            aux = aux->next;
            delete_element(h, n, aux, prev);
        }
        else if(aux->data == n){
            prev->next = aux->next;
            aux->next = (struct node *) NULL;
            free(aux);
        }
    }
}