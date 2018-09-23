#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void cria_lista_ord();

int main(){
    struct node *head;
    cria_lista_ord
}

void cria_lista_ord(struct node **h, struct ndoe *prev, struct node *aux){
    int n;

    scanf("%d", &n);
    if(n){
        if(*h == (struct node *) NULL){
            *h = (struct node *) malloc(sizeof(struct node));
            (*h)->data = n;
            (*h)->next = (struct node *) NULL;
            aux = *h;
        }
    }
}