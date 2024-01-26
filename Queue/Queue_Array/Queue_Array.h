#ifndef QUEUE_ARRAY_H_INCLUDED
#define QUEUE_ARRAY_H_INCLUDED
#include <stdlib.h>
#define maxqueue 100
#define queue_entry int

typedef struct Queue
{
    int front;
    int rear;
    int size;
    queue_entry entry[maxqueue];
}queue;

void creatqueue(queue *pq);
void append (queue_entry e, queue *pq);
void serve(queue_entry *pe , queue *pq);
int queue_empty(queue *pq);
int queuefull(queue *pq);
int queuesize(queue *pq);
void clearqueue(queue *pq);
//queue_entry queuetop(queue *pq);
void Traverse_queue(queue *pq , void *pf (queue_entry));

#endif // QUEUE_ARRAY_H_INCLUDED
