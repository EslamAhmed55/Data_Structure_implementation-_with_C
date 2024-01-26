#ifndef STACK_ARRAY_H_INCLUDED
#define STACK_ARRAY_H_INCLUDED

#define stackentry char
#define maxstack 100
typedef struct Stack
{
     stackentry entry [maxstack];
     int top;
} stack;



void creatstack(stack *ps);
void push(stackentry e , stack *ps);
int stackfull (stack *ps);
void pop(stackentry *pe , stack *ps );
int stackempty(stack *ps);
void stacktop (stackentry *pe ,stack *ps);
int stacksize(stack *ps);
void clearstack (stack *Ps);
void TraverseStack(stack *ps , void *pf (stackentry));

#endif // STACK_ARRAY_H_INCLUDED
