#include <stdio.h>
#include <stdlib.h>

void create_list(void);
void show_content(void);
void append(int n);
void insert(int n);

struct node{
    int data;
    struct node *next;
};

struct node *head;

// Driver program
int main(){
    create_list();
    show_content();
    append(10);
    show_content();
    insert(99);
    show_content();
}

// Insert a node at the beggining of the list
void insert(int n){
    struct node *aux;
    aux = (struct node *) malloc(sizeof(struct node));
    aux->data = n;
    aux->next = head;
    head = aux;
    aux = (struct node *) NULL;
}

// Insert a node at the end of the list
void append(int n){
    struct node *aux = head;
    if(head == (struct node *) NULL){
        head = (struct node *) malloc(sizeof(struct node));
        head->data = n;
        head->next = (struct node *) NULL;
    }
    else{
        while(aux->next != (struct node *) NULL)
            aux = aux->next;
        aux->next = (struct node *) malloc(sizeof(struct node));
        aux = aux->next;
        aux->data = n;
        aux->next = (struct node *) NULL;
        aux = (struct node *) NULL;
    }
}

// Show the contents of the list
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

// Create list based on input
void create_list(void){
    int n;
    struct node *aux;
    scanf("%d", &n);

    head = (struct node *) NULL;
    if(n){
        aux = (struct node *) malloc(sizeof(struct node));
        aux->data = n;
        aux->next = (struct node *) NULL;
        head = aux;
        while(scanf("%d", &n), n){
            aux->next = (struct node *) malloc(sizeof(struct node));
            aux = aux->next;
            aux->data = n;
            aux->next = (struct node *) NULL;
        }
        aux = (struct node *) NULL;
    }
}