#include "stack.h"

Stack *
initStack(int capacity)
{
    Stack *ps = (Stack *) malloc(sizeof(Stack));
    ps->base = (StackEntry *) malloc(capacity * sizeof(StackEntry));
    ps->capacity = capacity;
    ps->top = 0;
    return ps;
}

void
resize(Stack *ps, int new_capacity)
{
    StackEntry *arr = realloc(ps->base, sizeof(StackEntry) * new_capacity);
    if(arr){
        ps->base = arr;
        ps->capacity = new_capacity;
    }
}
void
push(StackEntry e, Stack *ps)
{
    if(ps->capacity <= ps->top +1)
        resize(ps, 2 * ps->capacity);
    ps->base[ps->top++] = e; 
}

void
clear(Stack *ps)
{
    ps->capacity = 0;
    ps->top = 0;
    free(ps->base);
    free(ps);
}

int
size(const Stack *ps)
{
    return ps->top;
}
int
capacity(const Stack *ps)
{
    return ps->capacity;
}

StackEntry
top(const Stack *ps)
{
    return ps->base[ps->top-1];
}

