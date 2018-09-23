#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int maior(struct node *h);
int menor(struct node *h);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
    printf("maior = %d\n", maior(head));
    printf("menor = %d\n", menor(head));
}

int maior(struct node *h, int cmp){
    int data;
    if(h != (struct node *) NULL){
        data = maior(h->next);
        return h->data > data ? h->data : data;
    }
    return 0;
}
