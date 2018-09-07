#include <stdio.h>
#include <stdlib.h>

void deletion(void);
void show_content(void);
void create_list(void);

struct node{
    int data;
    struct node *next;
};

struct node *head;

int main(){
    create_list();
    show_content();
    deletion();
    show_content();
}

void create_list(void){
    int n;
    struct node *end; // (end is just a iterator)
    scanf("%d", &n);

    head = (struct node *) NULL;
    if(n){
        // "creation" of the head
        head = (struct node *) malloc(sizeof(struct node));
        head->data = n;
        head->next = (struct node *) NULL;
        end = head;

        // while the given number is different than 0, add the given number to the end of the list
        while(scanf("%d", &n), n){
            end->next = (struct node *) malloc(sizeof(struct node)); // allocate space to the next node
            end = end->next; // move the iterator to the next node 
            end->data = n;  
            end->next = (struct node *) NULL;
        }
        // after creating the list I dont need 'end' anymore
        end = (struct node *) NULL;
    }
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