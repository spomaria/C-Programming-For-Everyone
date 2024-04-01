# C Program that Counts the Number of Blanks and New Lines

## Introduction
In this course, I am learning the how to gain programming mastery in the C Programming for Everyone Course at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Counting the Number of Blanks and New Lines
We shall write a C Program that counts the number of blanks and new lines in a given document.

On our local machine, we create a file and name it `count_blanks.c` using the following bash command
```bash
touch count_blanks.c
```
Inside our `count_blanks.c` file, we write following codes
```C
#include <stdio.h>
main() /* count blanks and new lines in input */
{
    /* declare the variables to be used */
    int c, nl, nb;
    /* initializing the variables*/
    nl = nb = 0;
    while ((c = getchar()) != EOF)
    /* checking if the next character is
    an end of line, where the condition holds true,
    we increment the number of lines*/
        if (c == '\n')
            ++nl;
        /* checking if the next character is
    an empty character, where the condition holds true,
    we increment the number of blanks*/
        else if (c == ' ')
            ++nb;
    /* print out the number of blanks and 
    the number of new lines*/
    printf("%d %d\n", nb, nl);
}
```

To compile our script, we use the following bash command
```bash
gcc -ansi count_blanks.c -o count_blanks_newlines
```
The above command will produce an executable file named `count_blanks_newlines` in the same directory as our `count_blanks.c` file upon successful compilation. In order to test the functionality of our C program, we save the document as .txt file.

To achieve this, create a `test.txt` file in the same directory using the following bash command
```bash
touch test.txt
```

In our exercise, we pasted the following lines into our `test.txt` file
```
But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief

```

Next, to count the number of blanks and new lines in our document using our C Program, we run the following command
```bash
./count_blanks_newlines < test.txt
```
The expected result is `29 4` implying that we have `29` blanks and `4` lines.

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