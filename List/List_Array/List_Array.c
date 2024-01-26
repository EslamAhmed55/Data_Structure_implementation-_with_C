#include"List_Array.h"

void creatlsit(list *pl)
{
    pl->size=0;
}

int listempty(list *pl)
{
    return !pl->size;
}

int listfull(list *pl)
{
    return pl->size==maxlist;
}

int listsize(list *pl)
{
    return pl->size;
}

void destroylist(list *pl)
{
    pl->size=0;
}
void insertlist(int p ,listentry e , list *pl)
{
    int i;
    for(i=pl->size;i>=p;i--)
    {
        pl->entry[i+1]=pl->entry[i];
    }
    pl->entry[p]=e;
    pl->size++;
}

 void deletelist(int p, listentry *pe,list *pl)
 {

     int i;
     *pe=pl->entry[p];
     for(i=p+1;i<= pl->size-1 ;i++ )
     {

         pl->entry[i]=pl->entry[i-1];
     }
     pl->size--;
 }

 void retrivelist(int p, listentry *pe , list *pl)
 {
     *pe=pl->entry[p];

 }

 void replacelist(int p, listentry e , list *pl)
 {

     pl->entry[p]=e;
 }

 void traverselistt(list *pl, void *pf(listentry))
 {

     int i;
     for(i=0;i<pl->size; i++)
     {

         *pf(pl->entry[i]);
     }
 }



