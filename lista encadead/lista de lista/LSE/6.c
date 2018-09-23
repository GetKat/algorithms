#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int count_elements(struct node *head);

int main(){
    struct node *head;
    cria_lista_inv(&head);
    show_content(head);
    printf("%d elementos\n", count_elements(head));
}

int count_elements(struct node *h){
    if(h != (struct node *) NULL){
        h = h->next;
        return count_elements(h) + 1;
    }
    return 0;
}
