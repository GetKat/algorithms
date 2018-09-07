#include <stdio.h>
#include <stdlib.h>

void deletion(void);

struct node{
    int data;
    struct node *next;
};

struct node *head;

int main(){
    
}

void deletion(void){
    struct node *aux;
    aux = head;
    while(aux != (struct node *) NULL){
        head = head->next; // move the head to the next element
        aux->next = (struct node *) NULL; // unlink the element at the begging
        free(aux); // erase from memory
        aux = head; // move aux to the next element (now the first element of the list)
    }
}

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
}