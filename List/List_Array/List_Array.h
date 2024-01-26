#ifndef LIST_ARRAY_H_INCLUDED
#define LIST_ARRAY_H_INCLUDED
#include <stdlib.h>
#include <string.h>
#define listentry int
#define maxlist 100

// note that the listentry and keytype  should have the same datatype because  i applied searching algorithms in list structure
typedef int keytype ;
typedef struct list
{
    listentry entry[maxlist];
    int size;
}list;

// macros use in searching algorithms if keytype is (int or float or char or double or any datatype expected string)
#define EQ(a,b) ((a)==(b))
#define LT(a,b) ((a)<(b))
#define LE(a,b) ((a)<=(b))
#define GT(a,b) ((a)>(b))
#define GE(a,b) ((a)>=(b))

// macros use in searching algorithms if keytype is string
/*
#define EQ(a,b)  (!strcmp((a),(b)))
#define LT(a,b) (strcmp((a),(b))<0)
#define LE(a,b) (strcmp((a),(b))<=0)
#define GT(a,b) (strcmp((a),(b))>0)
#define GE(a,b) (strcmp((a),(b))>=0)
*/

///////////////////////////////////////////////////////////////////////

void creatlsit(list *pl);
int listempty(list *pl);
int listfull(list *pl);
int listsize(list *pl);
void destroylist(list *pl);
void insertlist(int p,listentry e, list *pl);
void deletelist(int p,listentry *pe,list *pl);
void retrivelist(int p, listentry *pe , list *pl);
void replacelist(int p, listentry e,list *pl);
void traverselistt(list *pl, void *pf(listentry));
// searching algorithm
void arrangement(list *pl);// to arrangment the elements form small to big to apply Binary search mechanism
void insertorder(listentry e,list *pl); // to insert element into list without Disruption to arrangment of elements
int sequential_search(keytype target, list *pl); // iteratively search
int rec_binary(list *pl, keytype k, int bottom , int top);
int rec_binary_search(keytype k, list *pl);
int Binary_Search( keytype k, list *pl); // iteratively  Binary search


#endif // LIST_ARRAY_H_INCLUDED
