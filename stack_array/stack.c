#include "stack.h"

void initStack(Stack *ps){
    ps->top = 0;
}

bool isFull(const Stack *ps){
    return ps->top == MAXSIZE;
}

bool isEmpty(const Stack *ps){
    return ps->top == 0;
}

void push(StackEntry e, Stack *ps){
    ps->arr[ps->top++] = e;
}

void pop(Stack *ps){
    ps->top--;
}

StackEntry top(const Stack *ps){
    return ps->arr[ps->top-1];
}

int size(const Stack *ps){
    return ps->top;
}

void clear(Stack *ps){
    ps->top = 0;
}

void print(const Stack *ps, void (*pf)(StackEntry)){
    for(int i = ps->top; i > 0; i--)
        (*pf)(ps->arr[i-1]);
}
