#include "stack.h"

int
main()
{
    Stack *ps = initStack(3);
    push(5, ps);
    push(3, ps);
    push(7, ps);
    push(1, ps);
    push(9, ps);
    printf("%d...%d..%d\n", capacity(ps), size(ps), top(ps));
    clear(ps);
}
