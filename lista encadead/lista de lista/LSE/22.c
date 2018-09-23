#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void erase(struct node **h);

int main(){
    struct node *head;
    cria_list_ord(&head);
    show_content(head);
}

void erase(struct node **h){
    if((*h) != (struct node *) NULL){
        struct node *novo = *h;
        (*h) = (*h)->next;
        free(novo);
        novo = (struct node *) NULL;
        erase(h);
    }
}