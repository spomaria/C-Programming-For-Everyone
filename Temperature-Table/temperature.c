#include <stdio.h>

/* Print Fahrenheit-Celsius table
for f = 0, 20, ..., 300*/

int main()
{
    /* code */
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;

    /* Print a heading for the table*/
    printf("Fahrenheit \t Celsius\n");
    /* use a while loop to generate the table*/
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f \t %6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
