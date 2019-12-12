#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define INIT_LENGTH 4
#define MAX_SIZE 1024

typedef struct {
    int *array;
    int capacity;
    int size;
} int_Darray;

void init_Darray(int_Darray *);
int size(const int_Darray *);
void resize(int_Darray *, int);
void push_back(int_Darray *, int);
void set(int_Darray *, int, int);
int get(const int_Darray *, int );
void delete(int_Darray *, int);
void shrink_to_fit(int_Darray *);
void Darray_free(int_Darray *);
void print(int_Darray *);
bool is_empty(const int_Darray *);
