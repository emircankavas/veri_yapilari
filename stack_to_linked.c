//
//
//  Yığıttan tek bağlı listeye aktar
//
//

#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE 100

struct linked {
    int info;
    struct linked *next;
};
typedef struct linked *LINKEDPTR;

struct stack {
    int top;
    int info[STACKSIZE];
};
typedef struct stack *STACKPTR;

void insert(LINKEDPTR list, int value) {
    LINKEDPTR q;
    if(list == NULL) {
        exit(1);
    }
    q = (LINKEDPTR) malloc(sizeof(struct linked));
    q->info = value;
    q->next = list->next;
    list->next = q;
}

void stack_to_linked(STACKPTR stack, LINKEDPTR list) {
    
    for(int i = 0; i < STACKSIZE; i++)
    {
        insert(list, stack->info[i]);
    }
    
}