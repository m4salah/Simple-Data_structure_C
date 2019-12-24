#include <stdio.h>
#include <stdbool.h>

#ifndef STACH_H
#define STACH_H

#define MAXSIZE 101
typedef char StackEntry;

typedef struct {
    int top;
    StackEntry arr[MAXSIZE];
} Stack;

void initStack(Stack *);
bool isFull(const Stack *);
bool isEmpty(const Stack *);
void push(StackEntry, Stack *);
void pop(Stack *);
StackEntry top(const Stack *);
int size(const Stack *);
void clear(Stack *);
void print(const Stack *, void (*pf)(StackEntry));

#endif
