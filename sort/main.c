#include<stdio.h>
#include "sort.h"

int main()
{
  int a[MAXSIZE],n,*v;
  v = input_arr(a);
  n = ArrLength(v);
  RadixSort(v); 
  printf("sizeof v is %d\n",n);
  print_arr(v,n);



}
