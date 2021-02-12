#include <stdio.h>
#define MAXLINE 1000  /* Maximum Input Line */

int getline(char line[], int maxline);
void reverse(char to[], char from[], int linelength);

/* Print input reversed, line by line */
main()
{
	int len;
	char line[MAXLINE];
	char buffer[MAXLINE];
	while ((len = getline(line, MAXLINE)) > 0)
		reverse(buffer, line, len);
		printf("%s", buffer);
	return 0;
}

/* Reverse a given array */
void reverse(char to[], char from[], int ll)
{
	int i, j;
	i = 0;
	for (j = ll - 1; j >= 0 && j - MAXLINE - 1; --j){
		to[i] = from[j];
		++i;
	}
	to[ll] = '\0';

}


/* Read a line into s and return its length */
int getline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar()) != EOF && c !='\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


