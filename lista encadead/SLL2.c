#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

// Adds the given number to the begging of the list until the given number is 0 (0 is not added) 

int main(){
    struct node *head, *aux;
    int n;

    head = (struct node *) NULL;
    // While the given number is different than 0, add the give number to the begging of the list 
    while(scanf("%d", &n), n){
        aux = (struct node *) malloc(sizeof(struct node)); // allocate memory to the new node
        aux->data = n;
        aux->next = head; // next node is the head cuz im addint the new node to the beggining
        head = aux; // the new node is now the head
    }
    // After the creating of the list, aux is not needed anymore
    aux = (struct node *) NULL;

    // Iterating through the list...
    for(struct node *i = head; i != (struct node *) NULL; i = i->next)
        printf("%d ", i->data);
    printf("\n");
}