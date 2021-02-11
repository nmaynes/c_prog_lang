#include <stdio.h>

#define MAX 1000  /* Max line size */
#define IN 1      /* In a Word */
#define OUT 0	  /* Outside a Word */

int getline(char line[], int maxline);

/* Print Lines with trailing blanks and spaces removed */
main()
{
	int len;
	char line[MAX];

	while ((len = getline(line, MAX)) > 0){
		/* If the next character is a newline, decrement */
		if (line[len-1] == '\n')
			--len;
		/* If the next character is a space or tab, decrement */
		while (line[len-1] == ' ' || line[len-1] == '\t'){
			/* Set the current index equal to null and the next equal to newline the decrement */
			line[len-1] = '\n';
			line[len] = '\0';
			--len;
		}
		/* If the first array element is newline, skip, otherwise print the line */ 
		if (line[0] == '\n')
			;
		else
			printf("%s", line);	
	}
	return 0;

}

int getline(char s[], int limit)
{
	int c, i;
	int lim;
	for (i=0; i < lim - 1 && (c == getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
