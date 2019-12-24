#include "stack.h"

int
main()
{
    Stack ps = initStack(4);
    printf("%d...%d\n", ps.capacity, ps.top);
}
