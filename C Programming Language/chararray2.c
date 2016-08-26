#include <stdio.h>

#define MAXLINE 1000

int max ;
char line[MAXLINE];
char longest[MAXLINE];

int mgetline(void);
void copy(void);

/* print longest input line; specialized version */
int main()
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = mgetline()) > 0)
	{
		if (len > max)
		{
			max = len;
			copy();
		}
	}
	if (max > 0)
	{
		printf("Longest line: %s", longest);
	}
	return 0;
}

/* mgetline: specialized version */
int mgetline(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (c == '\n')
		{
			line[i] == c;
			++i;
		}
	}
	line[i] = '\0';
	return i;
}