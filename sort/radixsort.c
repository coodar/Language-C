#include "sort.h"

void RadixSort(int v[])
{
  int n;
  n = ArrLength(v);
  // Find the maximum number to know number of digits
  int m = getMax(v, n);

  // Do counting sort for every digit. Note that instead
  // of passing digit number, exp is passed. exp is 10^i
  // where i is current digit number
  for (int exp = 1; m/exp > 0; exp *= 10)
    countSort(v,exp); 
}
