#include <stdio.h>
#define MAXLINE 1000   /* Maximum inout line size */

int getline(char line[], int maxline);
void copy(char to[], char from[])

/* Reads a set of text lines and prints the longest */

int main()
{
    int len;   
    int maxl
    char line[MAXLINE]
    char longest[MAXLINE]
    
    max = 0
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)   /* there was a line */
    {
        printf("%s", longest);
    }
    return 0
}
