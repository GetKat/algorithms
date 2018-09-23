#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void cria_list_ord(struct node **h);

int main(){
    struct node *head;
    cria_list_ord(&head);
    show_content(head);
}

void cria_list_ord(struct node **h){
    int n;
    struct node *aux;

    scanf("%d", &n);
    if(n){
        aux = (struct node *) malloc(sizeof(struct node));
        aux->data = n;
        aux->next = (struct node *) NULL;
        *h = aux;
        while(scanf("%d", &n) && n){
            aux->next = (struct node *) malloc(sizeof(struct node));
            aux = aux->next;
            aux->data = n;
            aux->next = (struct node *) NULL;
        }
    }
    aux = (struct node *) NULL;
}