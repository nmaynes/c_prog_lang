#include <stdio.h>

#define MAX 1000  /* Max line size */
#define ll 80     /* Min Output Length */

int getline(char line[], int maxline);

/* Print Any Line Longer than 80 Characters */
main()
{
	int len;
	char line[MAX];

	len = 0;
	while ((len = getline(line, MAX)) > 0)
		if (len > ll && len < MAX)
			printf("LONGLINE: %s\n", line);
		return 0;

}

int getline(char s[], int limit)
{
	int c, i;

	for (i=0; i<limit-1 &&(c=getchar())!=EOF && c!='\n'; ++i)
	       s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;	
}
