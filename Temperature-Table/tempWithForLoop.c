#include <stdio.h>

/* Print Fahrenheit-Celsius table
for f = 0, 20, ..., 300*/

int main()
{
    /* code */
    float fahr, celsius;
    /* Print a heading for the table*/
    printf("Fahrenheit \t Celsius\n");
    /* use a while loop to generate the table*/
    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f \t %6.1f\n", fahr, celsius);
    }
    
    return 0;
}
