/** This is some test cases */
#include "vector.h"

int
main()
{
    int_Darray arr;
    init_Darray(&arr);
    
    push_back(&arr, 3);
    push_back(&arr, 4);
    push_back(&arr, 5);
    push_back(&arr, 6);
    push_back(&arr, 7);
    set(&arr, 0, 0);
    delete(&arr, 2);
    push_back(&arr, 5);
    /** delete(&arr, 3); */
    shrink_to_fit(&arr);
    /** for(int i = 0; i < arr.size; i++){ */
    /**     printf("%i ",get(&arr, i)); */
    /** } */
    print(&arr);
    printf("\n\n%i, %i\n",size(&arr), arr.capacity);
    printf("%i\n", is_empty(&arr));
    Darray_free(&arr);
    printf("%i\n", is_empty(&arr));
}
