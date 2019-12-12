#include "stack.h"

void display(StackEntry x){
    printf("%c", x);
}

void reverse_word(char *);

int
main(){
/**     Stack s;
  *     StackEntry element = 'm';
  *     initStack(&s);
  *     if(isEmpty(&s)){
  *         push('d', &s);
  *         push('e', &s);
  *         push(element, &s);
  *         push('a', &s);
  *         push('h', &s);
  *         push('o', &s);
  *         push('m', &s);
  *     }
  *     [> pop(&s); <]
  *     [> pop(&s); <]
  *     print(&s, &display);
  *     printf("\n%d\n", size(&s));
  *     [> pop(&s); <]
  *     printf("\n%c\n", top(&s));
  *  */
    char *name = "mohamed";
    printf("%s\n", name);
    reverse_word(name);
}

void reverse_word(StackEntry *s){
    int i = 0;
    Stack stack;
    initStack(&stack);

    while(s[i] != '\0'){
        push((StackEntry)(*(s+i)), &stack);
        i++;
    }
    print(&stack, &display);
    printf("\n");
}
