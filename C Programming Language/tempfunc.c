#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */
  
float convert(float f);

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = convert(fahr);
        printf("%.0f\t%.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float convert(float f)
{
    float c;
    
    c = (5.0 / 9.0) * (f - 32.0);
    
    return c;
}
