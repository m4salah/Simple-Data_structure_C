#include "stack.h"


void reverse_word(StackEntry *);

void 
display(StackEntry e)
{
    printf("%c", e);
}

int
main()
{
    Stack s = initStacks();
    /** initStack(&s); */
    push(98, &s);
    push(100, &s);
    push(65, &s);
    push(70, &s);
    push(105, &s);
    print(&s, &display);
    printf("\n%i\n", size(&s));
    pop(&s);
    printf("%c\n", top(&s));
    clear(&s);
    
    char *name = "mohamed";
    printf("%s\n", name);
    reverse_word(name);
}

void reverse_word(StackEntry *s){
    int i = 0;
    Stack stack=initStacks();
    /** initStack(&stack); */

    while(s[i] != '\0'){
        push((StackEntry)(*(s+i)), &stack);
        i++;
    }
    print(&stack, &display);
    printf("\n");
    clear(&stack);
}
