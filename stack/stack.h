#include "boolean.h"
#ifndef STACK_H
#define STACK_H
typedef struct stacknode{
 int data;
 struct stacknode *next;
 } *stack;

int menu(void);
void init_stack(stack *);
boolean is_full(void);
boolean is_empty(stack s);
void push(stack *,int);
int pop(stack *);
void print_stack(stack s);
#endif
