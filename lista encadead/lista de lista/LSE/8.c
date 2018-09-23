#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int count_elements(struct node *h);
int soma(struct node *h);

int main(){
    struct node *head;
    int count, sum;
    cria_lista_inv(&head);
    show_content(head);
    
    count = count_elements(head);
    sum = soma(head);
    printf("media = %.2f\n", count ? (float) sum/count : 0);
}

int soma(struct node *h){
    int data;
    if(h != (struct node *) NULL){
        data = h->data;
        h = h->next;
        return soma(h) + data;
    }
    return 0;
}

int count_elements(struct node *h){
    if(h != (struct node *) NULL){
        h = h->next;
        return count_elements(h) + 1;
    }
    return 0;
}