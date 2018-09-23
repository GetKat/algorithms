#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void cria_lista_ord(struct node **h);

int main(){
    struct node *head = (struct node *) NULL;
    cria_lista_ord(&head);
    show_content(head);
}

void cria_lista_ord(struct node **h){
    int n;
    struct node *aux = (struct node *) NULL, *prev = (struct node *) NULL;
    *h = (struct node *) NULL;

    scanf("%d", &n);
    if(n){
        aux = (struct node *) malloc(sizeof(struct node));
        aux->data = n;
        aux->next = (struct node *) NULL;
        *h = aux;
        while(scanf("%d", &n) && n){
            if((*h)->data > n){ //insere no inicio
                struct node *novo = (struct node *) malloc(sizeof(struct node));
                novo->data = n;
                novo->next = *h;
                *h = novo;
            }
            else{
                aux = *h;
                while(aux->data <= n && aux->next != (struct node *) NULL){
                    prev = aux;
                    aux = aux->next;
                }
                if(aux->data > n){
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
        }
    }
    aux = prev = (struct node *) NULL;
}