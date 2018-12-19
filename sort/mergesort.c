#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
int *Merge(int v_left[], int v_right[],int n_left, int n_right)
{

  int i,j,n,k;
  n = n_left + n_right;
  int *v = malloc(sizeof(int)*n);
  for(i=0,j=0,k=0;i<n_left && j <n_right && k<n;k++)
    {
      if (v_left[i] <= v_right[j])
      {
	v[k]= v_left[i];
	  i++;
      }
      else
	{
	  v[k]=v_right[j];
	    j++;
	}
    }
  while(i<n_left)
    {
      v[k]=v_left[i];
      i++;
      k++;
    }
  while(j<n_right)
    {
      v[k]=v_right[j];
      j++;
      k++;
    }
  
  printf("merge v is \n");
  print_arr(v,n);
  return v;  
}

int *ArraySplit(int v[],int p, int r)
{
  int i,n;
  n = r-p+1;
  int *a = malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    {
      a[i]=v[p];
      p++;
    }
  return a;
}  

int *MergeSort(int v[], int n)
{
  int q, *v_left,*v_right;
  if(n<2)
    return v;
  q=n/2;
  v_left =  ArraySplit(v,0,q-1);
  printf("q is %d\n v_left is\n",q);
  print_arr(v_left,q);
  v_right =  ArraySplit(v,q,n-1);
  printf("v_right is\n");
  print_arr(v_right,n-q);
  printf("v is \n");
  print_arr(v,n);
  return Merge(MergeSort(v_left,q), MergeSort(v_right,n-q),q,n-q);

}
