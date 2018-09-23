#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int count_elements(struct node *h);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
    printf("%d elementos\n", count_elements(head));
}

int count_elements(struct node *h){
    struct node *aux = h;
    int count = 0;
    while(aux != (struct node *) NULL){
        count++;
        aux = aux->next;
    }
    return count;
}