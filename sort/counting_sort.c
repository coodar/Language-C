#include "sort.h"
#include <stdlib.h>
int *CountingSort(int A[], int k)
{
  int i,j,n,*B,*C;
  n = ArrLength(A);
  B = malloc(sizeof(int)*n);
  C = malloc(sizeof(int)*(k+1));
  for(i=0;i<=k;i++)
    C[i]=0;
  for(j=0;j<=n-1;j++)
    C[A[j]]++;
  print_arr(C,k+1);
  for(i=1;i<=k;i++)
    C[i] += C[i-1];
  print_arr(C,k+1);
  for(j=n-1;j>=0;j--)
    {
      B[C[A[j]]-1] = A[j];
      C[A[j]]--;
    }
  return B;
}
