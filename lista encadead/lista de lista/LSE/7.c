#include <stdio.h>
#include <stdlib.h>
#include "node.h"

float media(struct node *h);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
    printf("media = %.2f\n", media(head));
}

float media(struct node *h){
    struct node *aux = h;
    int count = 0, soma = 0;
    while(aux != (struct node *) NULL){
        soma += aux->data;
        count++;
        aux = aux->next;
    }
    return count ? (float) soma/count : 0;
}
