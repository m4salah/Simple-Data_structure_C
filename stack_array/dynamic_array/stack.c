#include "stack.h"

Stack 
initStack(int capacity)
{
    Stack *ps = malloc(sizeof(Stack));
    ps->base = malloc(capacity * sizeof(StackEntry));
    ps->capacity = capacity;
    ps->top = 0;
    return *ps;
}
