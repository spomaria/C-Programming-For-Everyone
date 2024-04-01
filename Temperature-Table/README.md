# Temperature Converter in C Programming

## Introduction
In this course, I am learning the how to gain programming mastery in the C Programming for Everyone Course at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Temperature Converter
We shall write a C Program that converts temperature from Fahrenheit to Celsius.

On our local machine, we create a file and name it `temperature.c` using the following bash command
```bash
touch temperature.c
```
Inside our `temperature.c` file, we write our codes to print the corresponding temperature in Celsius for Fahrenheit values ranging from `0` to `300` with a step of `20` using a `while` loop as follows
```C
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

```

To compile our script, we use the following bash command
```bash
gcc -ansi temperature.c
```
This will produce a `a.out` file in the same directory as our `temperature.c` file upon successful compilation. In order to view the output of our script, we run the following bash command
```bash
./a.out
```

## Temperature Converter Using a For Loop
Simiarly, in the Temperature Converter Program above, we can use a `for` loop instead of a `while` loop. To accomplish this task, we create another file and name it `tempWithForLoop.c` by using the following bash command
```bash
touch tempWithForLoop.c
```
Inside our `tempWithForLoop.c` file, we write our codes as follows
```C
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
```

To compile our script, we use the following bash command
```bash
gcc -ansi tempWithForLoop.c
```
This will produce a `a.out` file in the same directory as our `tempWithForLoop.c` file upon successful compilation. In order to interact with our program, we run the following bash command
```bash
./a.out
```


## Authors
Nengak Emmanuel Goltong 

[@NengakGoltong](https://twitter.com/nengakgoltong) 
[@nengakgoltong](https://www.linkedin.com/in/nengak-goltong-81009b200)

Under the tutelage of 

Charles Russel Severance
[@drchuck](https://twitter.com/drchuck)
[@charlesseverance](https://www.linkedin.com/in/charlesseverance)

## License
This project is licensed under the MIT License - see the LICENSE.md file for details