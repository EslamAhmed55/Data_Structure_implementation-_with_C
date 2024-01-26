#include <stdio.h>
#include <stdlib.h>
#include "Stack_LinkedList.h"
void Display(char e){
   printf("e is: %d\n", e);
}

int main()
{
 stack s;
 creatstack(&s);
 int x[5];
 int i;
 for(i=0;i<5;i++)
 {
     scanf("%d",&x[i]);
     push(x[i],&s);
 }
TraverseStack(&s,&Display);
pop(x+4,&s);
int t =stacksize(&s);
printf("%d \n",t);
TraverseStack(&s,&Display);
int d= stacktop(&x[5],&s);
printf("%d \n",d);
    return 0;

}


