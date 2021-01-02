#include <stdio.h>

/* copy input to output  */

int main()
{
	int c;

/*	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
*/
	while ((c = getchar()) != EOF)
		putchar(c);
	printf("%d", (c = getchar() != EOF));
	printf("%d", EOF);
}
