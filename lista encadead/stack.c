#include <stdio.h>
#include <stdlib.h>

void create_stack(void);
void top(void);
void pop(void);
void push(int n);

struct node{
    int data;
    struct node *next;
};

struct node *head;

int main(){
    /*insert dirver program here*/
}

void create_stack(void){
    head = (struct node *) NULL;
}

// Insert an element to the begging of the list (top of the stack)
void push(int n){
    struct node *aux;
    aux = (struct node *) malloc(sizeof(struct node));
    aux->data = n;
    aux->next = head;
    head = aux;
    aux = (struct node *) NULL;
}

// Removes the element at the top of the stack (begging of the list)
void pop(void){
    struct node *aux = head;
    head = head->next;
    aux->next = (struct node *) NULL;
    free(aux);
    aux = (struct node *) NULL;
}

// Print the value at the top of the stack (begging of the list)
void top(void){
    if(head != (struct node *) NULL)
        printf("%d\n", head->data);
    else
        printf("Stack vazio!\n");
}