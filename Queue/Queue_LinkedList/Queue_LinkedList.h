#ifndef QUEUE_LINKEDLIST_H_INCLUDED
#define QUEUE_LINKEDLIST_H_INCLUDED
#include <stdlib.h>
#define queue_entry int

typedef struct QueueNode
{
    queue_entry entry;
    struct QueueNode *next;
}queuenode;


typedef struct queue
{
    queuenode *front;
    queuenode *rear;
    int size ;
} queue;

void creatqueue(queue *pq);
void append(queue_entry e, queue *pq);
void serve(queue_entry *pe , queue*pq);
int queue_empty(queue *pq);
int queuefull(queue *pq);
int queuesize(queue *pq);
void clearqueue(queue *pq);
void TraverseQueue(queue *pq, void *pf(queue_entry));

#endif // QUEUE_LINKEDLIST_H_INCLUDED
