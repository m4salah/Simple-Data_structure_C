#include "stack.h"

void initStack(Stack *ps){
    ps->top = NULL;
}

void push(StackEntry e, Stack *ps){
    StackNode *pn = (StackNode *) malloc(sizeof(StackNode));
    pn->data = e;
    pn->next = ps->top;
    ps->top = pn;
}

void pop(Stack *ps){
    StackNode *pn = ps->top;
    ps->top = ps->top->next;
    free(pn);
}

StackEntry top(const Stack *ps){
    return ps->top->data;
}

bool isEmpty(const Stack *ps){
    return !ps->top;
}

bool isFull(const Stack *ps){
    return 0;
}

int size(const Stack *ps){
    int size_stack = 0;
    StackNode *pn = ps->top;
    /** while(pn){
      *     pn = pn->next;
      *     size_stack++;
      * } */
    for(; pn; pn = pn->next)
        size_stack++;
    return size_stack;
}

void clear(Stack *ps){
    StackNode *pn = ps->top;

    while(pn){
        pn = pn->next;
        free(ps->top);
        ps->top = pn;
    }
}

void print(const Stack *ps, void(*pf)(StackEntry)){
    /** StackNode *pn = ps->top;
      * while(pn){
      *     (*pf)(pn->data);
      *     pn = pn->next;
      * } */
    for(StackNode *pn = ps->top; pn; pn = pn->next)
        (*pf)(pn->data);
}
