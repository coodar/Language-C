#include <stdio.h>
int main()
{
	int c;
	while((c = getchar()) != EOF){
		putchar(c);
		printf("\nchar is %d, EOF is %d\n", c, EOF);
	}
	return 0;
}
