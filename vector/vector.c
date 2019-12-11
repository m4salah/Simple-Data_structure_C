#include "vector.h"
/**
  * DONE: struct the dynamic array data type
  * DONE: initilize the array
  * DONE: implemnt resize function
  * DONE: get(i) return i'th value in array
  * DONE: set(i. val) set the i'th to val
  * DONE: pushback(val) add val to the end
  * DONE: remove(i) remove the i'th value in array
  * DONE: size(arr) return the size of the array 
  * DONE: free the darray
  * DONE: shrink_to_fit(arr) make the size = capacity
  * DONE: print array
*/

// declare dynamic array datatype

// initialize it
void init_Darray(int_Darray *array){
    array->array = malloc(sizeof(int *) * INIT_LENGTH);
    array->capacity = INIT_LENGTH;
    array->size = 0;
}

//get size of it
int size(const int_Darray *array){
    return array->size;
}
/**  */
// resize it
void resize(int_Darray *array, int new_capacity){
    int *arr = realloc(array->array, sizeof(int) * new_capacity);
    if(arr){
        array->array = arr;
        array->capacity = new_capacity;
    }
}
/**  */
// push back value
void push_back(int_Darray *arr, int val){
    
    if(arr->capacity == arr->size && arr->capacity < MAX_SIZE)
         resize(arr, arr->capacity * 2);
    arr->array[arr->size++] = val;
}

void set(int_Darray *arr, int index, int val){
    if(index >= 0 && index < arr->size)
        arr->array[index] = val;
}
/**  */
int get(const int_Darray *arr, int index){
    if(index >= 0 && index <= arr->size)
        return arr->array[index];
    else
        return -1;
}
/**  */
void delete(int_Darray *arr, int index){
    if(index >= 0 && index < arr->size){
        for(int i = index; i < arr->size; i++){
            arr->array[i] = arr->array[i+1];
            arr->array[i+1] = -1;
        }
        arr->size--;

        if(arr->size == arr->capacity / 4);
            resize(arr, arr->capacity / 2);
    }
    else{
        printf("There is something wrong");
        return;
    }
}
/**  */
void shrink_to_fit(int_Darray *arr){
    arr->capacity = arr->size;
}

void Darray_free(int_Darray *arr){
    arr->size = 0;
    arr->capacity = 0;
    free(arr->array);
}
/**  */
void print(int_Darray *arr){
    for(int i = 0; i < arr->size; i++)
        printf("%i ", get(arr, i));
}

bool is_empty(const int_Darray *arr){
    return arr->size;
}
