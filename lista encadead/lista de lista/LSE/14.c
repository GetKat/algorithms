#include <stdio.h>
#include <stdlib.h>
#include "node.h"

struct node *head, *aux, *prev;

void append_sort(int n);

int main(){
    cria_lista_inv(&head); //// input: 5 4 3 2 1 result: 1 -> 4 -> 6 -> 8 -> 10 -> NULL
    show_content(head);
    aux = head;
    append_sort(15);
    show_content(head);
    aux = head;
    append_sort(3);
    show_content(head);
}

void append_sort(int n){
    if(head == (struct node *) NULL){
        head = (struct node *) malloc(sizeof(struct node));
        head->data = n;
        head->next = (struct node *) NULL;
    }
    else if(head->data > n){
        struct node *novo = (struct node *) malloc(sizeof(struct node));
        novo->data = n;
        novo->next = head;
        head->next = (struct node *) NULL; 
    }
    else if(aux->data <= n && aux->next != (struct node *) NULL){
        prev = aux;
        aux = aux->next;
        append_sort(n);
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
