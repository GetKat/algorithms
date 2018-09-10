#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void load_from_file(struct node **h);
void save_in_file(struct node *h);
void create_list(struct node **h);
void show_content(struct node *h);

int main(){
    struct node *head;
    //create_list(&head);
    //show_content(head);
    //save_in_file(head);
    load_from_file(&head);
    show_content(head);
}

void create_list(struct node **h){
    struct node *it;
    *h = (struct node *) NULL;

    int n;
    scanf("%d", &n);
    if(n){
        *h = (struct node *) malloc(sizeof(struct node));
        (*h)->data = n;
        (*h)->next = (struct node *) NULL;
        it = *h;
        while(scanf("%d", &n), n){
            it->next = (struct node *) malloc(sizeof(struct node));
            it = it->next;
            it->data = n;
            it->next = (struct node *) NULL;
        }
        it = (struct node *) NULL;
    }
}

void show_content(struct node *h){
    struct node *aux = h;

    if(aux == (struct node *) NULL)
        printf("Empty!\n");
    else
        while(aux != (struct node *) NULL){
            printf("%d\n", aux->data);
            aux = aux->next;
        }
}

void save_in_file(struct node *h){
    struct node *aux = h;
    FILE *f = fopen("data.bin", "wb");
    if(!f)
        return;
    while(aux != (struct node *) NULL){
        int data;
        data = aux->data;
        aux = aux->next;
        fwrite(&data, sizeof(int), 1, f);
    }
    fclose(f);
}

void load_from_file(struct node **h){
    struct node *aux = (struct node *) NULL;
    (*h) = (struct node *) NULL;
    int data;
    FILE *f = fopen("data.bin", "rb");
    if(!f)
        return;
    while(fread(&data, sizeof(int), 1, f)){
        if(*h == (struct node *) NULL){
            *h = (struct node *) malloc(sizeof(struct node));
            (*h)->data = data;
            (*h)->next = (struct node *) NULL;
            aux = *h;
        }
        else{
            aux->next = (struct node *) malloc(sizeof(struct node));
            aux = aux->next;
            aux->data = data;
            aux->next = (struct node *) NULL;
        }
    }
}