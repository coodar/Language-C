#include<stdio.h>
#include "sort.h"

int main()
{
  int a[MAXSIZE],n,*v, *result;
  v = input_arr(a);
  n = ArrLength(v);
  result = CountingSort(v,10); 
  printf("sizeof v is %d\n",n);
  print_arr(result, n);
}
