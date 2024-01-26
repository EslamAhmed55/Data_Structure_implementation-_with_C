#ifndef STACK_LINKEDLIST_H_INCLUDED
#define STACK_LINKEDLIST_H_INCLUDED
#include <stdlib.h>
#define stackentry int
typedef struct StackNode
{
    stackentry entry;
    struct StackNode *next;

}stacknode;

typedef struct stack
{
    stacknode *top;
    int size;
}stack;

void creatstack(stack *ps);
void push(stackentry e , stack *ps);
//int stackfull (stack *ps);
void pop(stackentry *pe , stack *ps );
int stackempty(stack *ps);
stackentry stacktop (stackentry *pe ,stack *ps);
int stacksize(stack *ps);
void clearstack (stack *Ps);
void TraverseStack(stack *ps , void *pf (stackentry));




#endif // STACK_LINKEDLIST_H_INCLUDED
