# C Program that Prints Each Word of a Document on a New Line

## Introduction
This exercise is part of my learning how to gain programming mastery through the C Programming for Everyone Course at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Printing Each Word of a Document on a New Line
We shall write a C Program that take a document as input and prints each word of the document on a new line.

On our local machine, we create a file and name it `print_words.c` using the following bash command
```bash
touch print_words.c
```
Inside our `print_words.c` file, we write following codes
```C
#include <stdio.h>
main() /* print the words of a document one per line */
{
    /* declare the variables to be used */
    int c;
    /* define a variable that tracks if we are currently
    in a word or not*/
    int inWord = 0; /* set it to false */
    /* a word is delimited by either a blank space
    or an end of a line*/
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            /* we only print when we were in a word
            and then encounter a blank space, a tab
            or the end of a line*/
            if (inWord)
            {
                putchar('\n');
            }
        } else
        {
            putchar(c);
            inWord = 1; /* set the variable to true*/
        }
        
    }
    
}
```

To compile our script, we use the following bash command
```bash
gcc -ansi print_words.c -o print_one_word_per_line
```
The above command will produce an executable file named `print_one_word_per_line` in the same directory as our `print_words.c` file upon successful compilation. In order to input the functionality of our C program, we save the document as `.txt` file.

To achieve this, create an `input.txt` file in the same directory using the following bash command
```bash
touch input.txt
```

In our exercise, we pasted the following lines into our `input.txt` file
```
But soft what light
through yonder window
breaks
```

Next, to print each word of our document on a new line using our C Program, we run the following command
```bash
./print_one_word_per_line < input.txt
```
The expected result is 
```
But
soft
what
light
through
yonder
window
breaks
```

Notice that each word of the document is printed on a new line.

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