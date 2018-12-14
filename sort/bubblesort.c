int *bubblesort(int v[],int n)
{
  int i,j,temp;
  /*from 1 to n, compare ith element*/
  for(i=0;i<n;i++)
    {
    /*compare with adjacent element*/
      for(j=n-1;j>i;j--)
      {
	/*swap if v[j]<v[j-1]*/
	if(v[j]<v[j-1])
	  {
	    temp=v[j-1];
	    v[j-1]=v[j];
	    v[j]=temp;
	  }
      }
    }
  return v; 
}
