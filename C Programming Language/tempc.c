#include <stdio.h>

/* print Celsius-Fahrenheit table
  for celsius = 0, 10, ..., 150 
  Uses float instead of int */
  
int main()
{
    printf("Celsius-Fahrenheit table\n");
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;   /* lower limit of temperature table */
    upper = 150; /* upper limit */
    step = 10; /* step size */
    
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius * 1.8) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
