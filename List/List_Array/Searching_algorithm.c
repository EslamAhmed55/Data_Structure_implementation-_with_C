#include "List_Array.h"

void arrangement(list *pl)
{
    int i, j ;
    listentry temp;
    for(i=0;i<pl->size;i++)
    {
        for(j=i+1; j< pl->size;j++)
        {
            if(pl->entry[i]>pl->entry[j])
            {
                temp=pl->entry[i];
                pl->entry[i]= pl->entry[j];
                pl->entry[j]=temp;
            }
        }
    }
}


int sequential_search(keytype target , list *pl)
{
     int current , s=listsize(pl);
     listentry currententry;
     for(current=0; current<s ;current++)
     {
         retrivelist(current,&currententry,pl);
         if(EQ(target,currententry))
            return current;
     }
     return -1;
     }

void insertorder(listentry e, list *pl)
{
    int current , s=listsize(pl);
     listentry currententry;
     for(current=0; current<s ;current++)
     {
         retrivelist(current,&currententry,pl);
         if(LE(e,currententry))
            break;
     }
     insertlist(current,e,pl);
}


int rec_binary(list *pl, keytype k, int bottom,int top)
{

    int middle;
    if(bottom<=top)
    {
        middle=(bottom+top)/2;
        if(EQ(k,pl->entry[middle]))
            return middle;
        if(LT(k,pl->entry[middle]))
            return rec_binary(pl,  k, bottom,middle-1);
        else
            return rec_binary(pl,  k, middle+1, top);
    }
    return -1;
}

int rec_binary_search(keytype k,list *pl)
{

    return rec_binary(pl, k ,0, pl->size-1);

}

int Binary_Search(keytype k , list *pl)
{

    int middle , bottom=0, top=pl->size-1;
    while (bottom<=top)
    {

        middle =(bottom + top)/2;
        if(EQ(k,pl->entry[middle]))
        {
            return middle;
        }

         if(LT(k,pl->entry[middle]))
        {
            return middle-1;
        }
        else
        {
            bottom=middle+1;
        }

    }

    return -1 ;
}
