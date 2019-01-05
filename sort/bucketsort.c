#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
#define BUCKETS 10
typedef struct node{
  int key;
  struct node *next;
} Listnode;

typedef struct node *Listptr;

Listptr Lalloc(void)
{
  return (Listptr) malloc(sizeof(Listnode));
}

Listnode *ListInsert(Listptr lp, int x)
{
  int temp;
  if(lp == NULL){
    lp = Lalloc();
    lp->key = x;
    lp->next = NULL;
  }
  else if(x>lp->key)
    lp->next = ListInsert(lp->next, x);
  else{
    temp = lp->key;
    lp->key = x;
    lp->next = ListInsert(lp->next, temp);
  }
  return lp;
}
void ListPrint(Listptr p)
{
  if(p != NULL){
    printf("%d ",p->key);
    ListPrint(p->next);
  }
}

void BucketSort(int v[])


{
  int i,j,n;
  n = ArrLength(v);
  Listptr B[BUCKETS];
  for(i=0;i<BUCKETS;i++)
    B[i]=NULL;
  for(i=0;i<=n-1;i++)
    {
     j=v[i]/BUCKETS;
     B[j]= ListInsert(B[j],v[i]);
    }
  for(i=0;i<BUCKETS;i++)
    ListPrint(B[i]);
}
