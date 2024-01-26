#include <stdio.h>
#include <stdlib.h>
#include "List_Array.h"
void Display(listentry e){
   printf("e is: %d \n", e);
}

int main()
{
    list l;
   creatlsit(&l);
int i ,x;
   for(i=0; i<5 ;i++)
   {
     scanf("%d",&x);
     insertlist(i,x,&l);
   }
   arrangement(&l);
   traverselistt(&l,&Display);

   int z= sequential_search(5,&l);
printf("e is: %d \n", z);
    return 0;
}
