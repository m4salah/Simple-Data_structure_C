#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int StackEntry; 


typedef struct node {
    StackEntry data;
    struct node *next;
} StackNode;

typedef struct top{
    StackNode *top;
    int size;
} Stack;
