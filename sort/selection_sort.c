int *SelectionSort (int v[], int n)
{
  int i,j,MiniIndex,temp;
  for(i=0;i<n-1;i++)
    {
      MiniIndex = i;
      for(j=i+1;j<n;j++)
	{
	  if(v[j]<v[MiniIndex])
	    MiniIndex = j;
	}
      temp=v[i];
      v[i]=v[MiniIndex];
      v[MiniIndex]=temp;
    }
  return v;
}
