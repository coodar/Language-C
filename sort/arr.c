#include<stdio.h>

int *input_arr(int v[])
{
  int i,element;
  for(i=0;scanf("%d", &element)==1;i++)
    {
      v[i]=element;
      printf("input v[%d] is %d\n",i,v[i]);
    }
  return v;
}
void print_arr(int v[], int n)
{
  int j;
  for(j=0;j<n;j++)
    printf("%d ",v[j]);
  printf("\n");
}
int ArrLength(int *Arr) {
  int i = 0;
  while (Arr[i])
    i++;
  return i;
}
void swap(int v[], int i, int j)
{
  int temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

