#include <stdio.h>

/* Print Fahrenheit-Celsius table
for f = 0, 20, ..., 300

Now we define the constans 0, 20, and 300*/

#define LOWER 0 /* lower limit of table*/
#define UPPER 300 /* upper limit*/
#define STEP 20 /* step size */
/* Note that by using the #define keyword 
to define constants, we ommit the assignment
operator '=' and the semi-colon
at the end of each statement*/
int main() /* Fahrenheit-Celsius table */
{
    /* code */
    int fahr;
    /* Print a heading for the table*/
    printf("Fahrenheit \t Celsius\n");
    /* use a for loop to generate the table of
    temperatures in reverse order*/
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%4d \t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    
    return 0;
}
