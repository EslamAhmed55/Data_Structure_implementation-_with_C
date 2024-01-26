#include "List_LinkedList.h"

void creatlist(list *pl)
{
    pl->head=NULL;
    pl->size=0;
}
void destroylist(list *pl)
{
  listnode *q;
  while(pl->head)
  {
      q=pl->head->next;
      free(pl->head);
      pl->head=q;
  }
  pl->size=0;
}
int listempty(list *pl)
{
    return pl->size==0;

}
int listfull(list *pl)
{
    return 0;
}
int listsize(list *pl)
{

    return pl->size;
}
void traverselist(list *pl,void *pf(listenrty))

{

    listnode *p=pl->head;
    while (p)
    {
        *pf(p->entry);
        p=p->next;
    }
}

void insertlist(int pos,listenrty e, list *pl)
{

    listnode *p,*q;
    p=(listnode *)malloc(sizeof(listnode));
    p->entry=e;
    p->next=NULL;

    int i;
    if(pos==0)
    {
        p->next=pl->head;
        pl->head=p;
    }
    else
    {
        for (q=pl->head,i=0;i<pos-1;i++)
        {
            q=q->next;
            p->next=q->next;
            q->next=p;
        }
        pl->size++;
    }
}
void deletelist(int pos,listenrty *pe, list *pl)
{

   int i;
    listnode *q,*tmp;
    if(pos==0)
    {
        *pe=pl->head->entry;
        tmp=pl->head->next;
        free(pl->head);
        pl->head=tmp;
    }
    else
    {
        for (q=pl->head , i=0;i<pos-1 ; i++)
        {

            q=q->next;
        }
        *pe=q->next->entry;
        tmp=q->next->next;
        free(q->next);
        q->next=tmp;
        pl->size--;

    }
}
void retrivelist(int pos ,listenrty *pe, list *pl)
{
    int i;
    listnode *q;
    for(q=pl->head,i=0;i<pos;i++)
    {
        q=q->next;
    }
    *pe=q->entry;
}
void replacelist(int pos, listenrty e, list *pl)
{
    int i;
    listnode *q;
    for(q=pl->head,i=0;i<pos;i++)
    {
        q=q->next;
    }
    q->entry=e;
}
