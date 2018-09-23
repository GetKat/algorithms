#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void append_sort_2(int n, struct node **head, struct node *prev, struct node *aux);

int main(){
    struct node *head;
    head = (struct node *) NULL;

    cria_lista_inv(&head); //// input: 5 4 3 2 1 result: 1 -> 4 -> 6 -> 8 -> 10 -> NULL
    show_content(head);

    append_sort_2(15, &head, (struct node *) NULL, head);
    show_content(head);

    append_sort_2(3, &head, (struct node *) NULL, head);
    show_content(head);
}

void append_sort_2(int n, struct node **head, struct node *prev, struct node *aux){
    if(*head == (struct node *) NULL){
        *head = (struct node *) malloc(sizeof(struct node));
        (*head)->data = n;
        (*head)->next = (struct node *) NULL;
    }
    else if((*head)->data > n){
        struct node *novo = (struct node *) malloc(sizeof(struct node));
        novo->data = n;
        novo->next = *head;
        (*head)->next = (struct node *) NULL;
    }
    else if(aux->data <= n && aux->next != (struct node *) NULL){
        prev = aux;
        aux = aux->next;
        append_sort_2(n, head, prev, aux);
    }
    else if(aux->data > n){
        struct node *novo = (struct node *) malloc(sizeof(struct node));
        novo->data = n;
        novo->next = aux;
        prev->next = novo;
    }
    else{
        struct node *novo = (struct node *) malloc(sizeof(struct node));
        novo->data = n;
        novo->next = (struct node *) NULL;
        aux->next = novo;
    }
}