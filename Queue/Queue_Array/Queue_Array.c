#include "Queue_Array.h"

void creatqueue(queue *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}

void append (queue_entry e, queue *pq)
{
    pq->rear=(pq->rear+1)%maxqueue;
    pq->entry[pq->rear]=e;
    pq->size++;
}

void serve(queue_entry *pe , queue *pq)
{
    *pe=pq->entry[pq->front];
    pq->front=(pq->front+1)%maxqueue;
    pq->size--;
}

int queue_empty(queue *pq)
{
    return !pq->size;
}

int queuefull(queue *pq)
{
    return pq->size==maxqueue;

}


int queuesize(queue *pq)
{

    return pq->size;
}


void clearqueue(queue *pq)
{

     pq->front=0;
    pq->rear=-1;
    pq->size=0;
}


void Traverse_queue(queue *pq , void *pf (queue_entry))
{

    int pos;
    int s;
    for(pos=pq->front,s=0; s<pq->size;s++)
    {

        *pf(pq->entry[pos]);
        pos=(pos+1)%maxqueue;
    }
}

/*
queue_entry queuetop(queue *pq)
{
    queue_entry *pe;
    return *pe=pq->entry[pq->front];
}
*/
