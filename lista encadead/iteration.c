#include <stdio.h>
#include <stdlib.h>

void show_content(void);

struct node{
    int data;
    struct node *next;
};

void show_content(void){
    struct node *aux = head;

    if(aux == (struct node *) NULL)
        printf("Lista vazia!\n");
    else{
        while(aux != (struct node *) NULL){
            printf("%d ", aux->data);
            aux = aux->next;
        }
        printf("\n");
    }
    
    // Alternative iteration:
    for(struct node *aux = head; aux != (struct node *) NULL; aux = aux->next)
        printf("%d ", aux->data);
    printf("\n");
}