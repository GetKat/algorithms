#ifndef NODE_H_
#define NODE_H_

struct single_node;
struct double_node;
struct single_descriptor;
struct double_descriptor;

struct single_node{
    int data;
    struct single_node *next;
};

struct double_node{
    int data;
    struct double_node *next, *prev;
};

struct single_descriptor{
    int count;
    struct single_node *head, *tail;
};

struct double_descriptor{
    int count;
    struct double_node *head, *tail;
};

typedef struct single_node snode;
typedef struct double_node dnode;
typedef struct single_descriptor sdesc;
typedef struct double_descriptor ddesc;


#endif // NODE_H_