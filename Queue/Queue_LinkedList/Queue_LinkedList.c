
#include "Queue_LinkedList.h"

void creatqueue(queue *pq )
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}

void append(queue_entry e, queue *pq)
{

    queuenode *pn=(queuenode*)malloc(sizeof(queuenode));
    pn->next=NULL;
    pn->entry=e;
    if(!pq->rear)
    {
        pq->front=pn;
    }
    else{
        pq->rear->next=pn;
    }
    pq->rear=pn;
    pq->size++;

}


void serve(queue_entry *pe , queue *pq)
{
    queuenode *pn=pq->front;
    *pe=pn->entry;
    pq->front=pn->next;
    free(pn);
    if(!pq->front)
        pq->rear=NULL;
    pq->size--;

}

int queue_empty(queue *pq)
{
    return !pq->front;
}
int queuefull(queue *pq)
{

    return 0;
}
int queuesize(queue *pq)
{

    return pq->size;
}

void clearqueue(queue *pq)
{
    while (pq->front)
    {
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
}
void TraverseQueue(queue *pq , void *pf (queue_entry))
{

    queuenode *pn;
    for(pn=pq->front ; pn; pn=pn->next)
    {

        *pf(pn->entry);
    }
}
