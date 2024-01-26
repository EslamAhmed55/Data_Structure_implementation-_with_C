#include "Stack_LinkedList.h"

void creatstack(stack *ps)
{
    ps->top=NULL;
    (*ps).size=0;

}

void push(stackentry e , stack*ps)
{
    stacknode *pn=(stacknode*)malloc(sizeof(stacknode));

    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
     (*ps).size++;

}

void pop(stackentry *pe , stack *ps )
{
    stacknode *pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
(*ps).size--;
}

int stackempty(stack *ps)
{
    return ps->top==NULL;
}

stackentry stacktop (stackentry *pe ,stack *ps)
{

   return *pe=ps->top->entry;
}
int stacksize(stack *ps)
{

    return (*ps).size;
}


void clearstack (stack *ps)
{
    stacknode *pn=ps->top;
    while(pn)
    {
        pn=pn->next;
        free(ps->top);
        ps->top=pn;

    }




 (*ps).size=0;
}

void TraverseStack(stack *ps , void *pf (stackentry))
{
    stacknode *pn = ps->top;

    while (pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;
    }

}

