#ifndef LIST_LINKEDLIST_H_INCLUDED
#define LIST_LINKEDLIST_H_INCLUDED
#define listenrty int
#include <stdlib.h>
typedef struct ListNode
{
    listenrty entry;
    struct ListNode *next;
}listnode;

typedef struct List
{
    listnode *head;
    int size;
}list;

void creatlist(list *pl);
void destroylist(list *pl);
int listempty(list *pl);
int listfull(list *pl);
int listsize(list*pl);
void traverselist(list *pl,void *pf(listenrty));
void insertlist(int pos,listenrty e, list *pl);
void deletelist(int pos,listenrty *pe, list *pl);
void retrivelist(int pos ,listenrty *pe, list *pl);
void replacelist(int pos, listenrty e, list *pl);

#endif // LIST_LINKEDLIST_H_INCLUDED
