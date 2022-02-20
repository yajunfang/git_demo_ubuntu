#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TElemType int

typedef struct BitNode
{
  TElemType data;
  struct BitNode *lchild,*rchild;
}BitNode,*BitTree;


void CreatBitTree(BitTree *T)
{
  *T=(BitTree)malloc(sizeof(BitNode));
  //root node  
  (*T)->data=1;
  (*T)->lchild=(BitTree)malloc(sizeof(BitNode));
  (*T)->rchild=(BitTree)malloc(sizeof(BitNode));

  //1 node's left child
  (*T)->lchild->data=2;
  (*T)->lchild->lchild=(BitTree)malloc(sizeof(BitNode));
  (*T)->lchild->rchild=(BitTree)malloc(sizeof(BitNode));

  //1 node's right child
  (*T)->rchild->data=3;
  (*T)->rchild->lchild=(BitTree)malloc(sizeof(BitNode));
  (*T)->rchild->rchild=(BitTree)malloc(sizeof(BitNode));

  //2 node's left child
  (*T)->lchild->lchild->data=4;
  (*T)->lchild->lchild->lchild=NULL;
  (*T)->lchild->lchild->rchild=NULL;

  //2 node's right child
  (*T)->lchild->rchild->data=5;
  (*T)->lchild->rchild->lchild=NULL;
  (*T)->lchild->rchild->rchild=NULL;
 
  //3 node's left child
  (*T)->rchild->lchild->data=6;
  (*T)->rchild->lchild->lchild=NULL;
  (*T)->rchild->lchild->rchild=NULL;  

  //3 node's right child
  (*T)->rchild->rchild->data=7;
  (*T)->rchild->rchild->lchild=NULL;
  (*T)->rchild->rchild->rchild=NULL;
}


void PrintBit(BitTree elem)
{
   printf("%d",elem->data);
}


void PreOrderTraverse(BitTree T)
{
  if(T)
  {
  PrintBit(T);
  PreOrderTraverse(T->lchild);
  PreOrderTraverse(T->rchild);
  }
 return;
}

int main()
{
   BitTree Tree;
   CreatBitTree(&Tree);
   printf("xainxubianli:\n");
   PreOrderTraverse(Tree);
   printf("\n");
}
