#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#define treeentry int
typedef  struct TreeNode
{
    treeentry entry;
    struct TreeNode *left, *right;

} treenode;
typedef struct *tree;

void creattree(tree *pt);
int treeempty(tree *pt);
int treefull(tree *pt);
void inorderrec(tree *pt , void (*pf)(treeentry)); // traverse tree by recursive method


void inorderrec(tree *pt , void (*pf)(treeentry)) ;// traverse tree bu iterative method
void cleartree(tree *pt);
void inserttreerec(tree *pt, treeentry *pe); // insert element by recursive method
void inserttree(tree *pt, treeentry *pe); // insert element by iterative method






#endif // TREE_H_INCLUDED
