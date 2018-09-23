#ifndef NODE_H_
#define NODE_H_
#include <stdio.h>

struct node;

struct node{
    int data;
    struct node *next;
};

void cria_list_ord(struct node **h); //19
void cria_lista_inv(struct node **h); //1
void show_content(struct node *h); //3

void show_content(struct node *h){
    struct node *aux = h;
    printf("Lista:\n");
    while(aux != (struct node *) NULL){
        printf("%d -> ", aux->data);
        aux = aux->next;
    } 
    aux = (struct node *) NULL;
    printf("NULL\n");
}

void cria_lista_inv(struct node **h){
    struct node *aux;
    int n;
    aux = *h = (struct node *) NULL;
    while(scanf("%d", &n), n){
        aux = (struct node *) malloc(sizeof(struct node));
        aux->data = n;
        aux->next = *h;
        *h = aux;
        aux = (struct node *) NULL;
    }
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

#endif // NODE_H_