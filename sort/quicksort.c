#include "sort.h"
int *QuickSort(int v[], int left, int right)
{
  int i, last;
  if(left>=right)
    return v;
  swap(v, left, (left+right)/2);
  last=left;
  for(i=left+1; i<=right; i++)
    if(v[i]<v[left])
	swap(v, ++last,i);
  swap(v, left, last);
  QuickSort(v,left,last-1);
  QuickSort(v,last+1,right);
  return v;
}
