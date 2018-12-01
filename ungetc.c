#include<stdio.h>
#include<ctype.h>
int main()
{
  int c;
  while((c = getchar()) != EOF)
    {
      putchar(c);
      printf("\n%d %c\n", c, c);
      if(!isalnum(c))
      	{
      	ungetc(c,stdin);
      	break;
      	}
    }
  printf("%d %c\n", c, c);  
  return 0;
}  
