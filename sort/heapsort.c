#include "sort.h"
int PARENT(int i)
{
  return (i-1)/2;
}
int LEFT(int i)
{
  return 2*i+1;
}
int RIGHT(int i)
{
  return 2*i+2;
}
void MAX_HEAPIFY(int v[], int i, int heap_size)
{
  int l,r,largest;
  l = LEFT(i);
  r = RIGHT(i);
  if(l<=heap_size-1 && v[l]>v[i])
    largest = l;
  else
    largest = i;
  if(r<=heap_size-1 && v[r]>v[largest])
    largest = r;
  if(largest != i)
    {
      swap(v,i,largest);
      MAX_HEAPIFY(v,largest,heap_size);
    }
}
void BUILD_MAX_HEAP(int v[], int n)
{
  int i, heap_size;
  heap_size = n;
  for(i=n/2;i>=0;i--)
    MAX_HEAPIFY(v,i,heap_size);
}
int *HeapSort(int v[], int n)
{
  int i, heap_size;
  heap_size = n;
  BUILD_MAX_HEAP(v,n);
  for(i=n-1;i>=1;i--)
    {
      swap(v,0,i);
      heap_size--;
      MAX_HEAPIFY(v,0,heap_size);
    }
  return v;
}
