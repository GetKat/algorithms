#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

// Adds the given number to the end of the list until the number is 0 (0 is not inserted)

int main(){
    int n;
    struct node *head, *end; // the head and the current end (end is just a iterator)
    scanf("%d", &n);

    head = (struct node *) NULL;
    if(n){
        // "creation" of the head
        head = (struct node *) malloc(sizeof(struct node));
        head->data = n;
        head->next = (struct node *) NULL;
        end = head;

        // while the given number is differet than 0, add the given number to the end of the list
        while(scanf("%d", &n), n){
            end->next = (struct node *) malloc(sizeof(struct node)); // alocate space to the next node
            end = end->next; // move the iterator to the next node 
            end->data = n;  
            end->next = (struct node *) NULL;
        }
        // after creating the list I dont need end anymore
        end = (struct node *) NULL;
    }

    // iteration through the linked list
    struct node *aux = head;
    if(aux == (struct node *) NULL)
        printf("Lista vazia!\n");
    else
        while(aux != (struct node *) NULL){
            printf("%d ", aux->data);
            aux = aux->next;
        }
    printf("\n");
    
    // Alternative iteration:
    for(struct node *aux = head; aux != (struct node *) NULL; aux = aux->next)
        printf("%d ", aux->data);
    printf("\n");
}