#include "Stack_Array.h"
 void creatstack(stack *ps)
 {

     ps->top=0;
 }

 void push(stackentry e , stack *ps)
 {
     ps->entry[ps->top]=e;
     ps->top++;
 }

 int stackfull(stack *ps)
 {
     if (ps->top==maxstack)
        return 1;
     else
     return 0;

 }


 void pop(stackentry *pe ,stack *ps)
 {

     ps->top--;
     *pe=ps->entry[ps->top];
 }

 int stackempty(stack*ps)
 {

     if(ps->top==0)
        return 1;
     else
        return 0;
 }

void stacktop(stackentry *pe ,stack *ps)
{
    *pe=ps->entry[ps->top-1];

}
int stacksize(stack *ps)
{
    return ps->top;
}

 void clearstack (stack *ps)
 {
    ps->top=0;
 }

 void TraverseStack(stack *ps , void *pf (stackentry))
 {

     int i;
     for(i=ps->top-1;i>0;i--)
     {

         *pf(ps->entry[i]);

     }
 }
