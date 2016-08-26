#include <stdio.h>

void swap(&a, &b)

void swap(int x, int y)
{
    int temp;
    
    temp = x;
    x = y;
    y = temp;
}
