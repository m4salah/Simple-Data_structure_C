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

Stack initStack(int);
#endif
