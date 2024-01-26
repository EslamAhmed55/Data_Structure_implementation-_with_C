#include <stdio.h>
#include <stdlib.h>
#include "Queue_Array.h"
int main()
{
    queue q;
    creatqueue(&q);
    int x=5;
    append(x,&q);
    printf("%d", queuesize(&q) );
    serve(&x,&q);
     printf("%d \n", queuesize(&q) );
    return 0;
}
