#include <string.h>
#include <stdio.h>
#undef strcmp

#ifndef STRCMP
# define STRCMP strcmp
#endif

/* Compare S1 and S2, returning less than, equal to or
   greater than zero if S1 is lexicographically less than,
   equal to or greater than S2.  */

int
STRCMP (const char *p1, const char *p2)
{
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1, c2;

  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0')
	return c1 - c2;
    }
  while (c1 == c2);

  return c1 - c2;
}
int main(int argc, char *argv[])
{
	int c;
	if (argc > 2)
		c = strcmp(argv[1], argv[2]);
	printf("%d\n", c);
		

}
