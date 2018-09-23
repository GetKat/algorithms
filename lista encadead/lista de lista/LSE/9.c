#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int maior(struct node *h);
int menor(struct node *h);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
    printf("maior = %d\nmenor = %d\n", maior(head), menor(head));
}

int maior(struct node *h){
    struct node *aux = h;
    int maior;
    if(h != (struct node *) NULL)
        maior = h->data;
    else
        return 0;
    while(aux != (struct node *) NULL){
        if(aux->data > maior)
            maior = aux->data;
        aux = aux->next;
    }
    return maior;
}

int menor(struct node *h){
    struct node *aux = h;
    int menor;
    if(h != (struct node *) NULL)
        menor = h->data;
    else
        return 0;
    while(aux != (struct node *) NULL){
        if(aux->data < menor)
            menor = aux->data;
        aux = aux->next;
    }
    return menor;
}