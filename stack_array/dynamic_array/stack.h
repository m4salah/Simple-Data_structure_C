#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef STACK_H
#define STACK_H

#define INI_CAPACITY 4;
typedef int StackEntry;

typedef struct stack{
    StackEntry *base;
    int capacity;
    int top;
} Stack;

Stack *initStack(int);
void resize(Stack *,int);
void push(StackEntry, Stack *);
void clear(Stack *);
int size(const Stack*);
int capacity(const Stack *);
StackEntry top(const Stack *);
#endif
