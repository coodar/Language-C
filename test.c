#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
  int d, c;
  size_t n = 50;
  char *line, s[20];
  line = (char *) malloc(n * sizeof(line));
  c = getline(&line,&n,stdin);
  sscanf(line,"%d %s", &d, s);
  printf("%d, %s ,%s\n", d, s, line);
}
