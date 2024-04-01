# C Program that Removes Extra Spaces

## Introduction
This exercise is part of my learning how to gain programming mastery through the C Programming for Everyone Course at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Removing Extra Spaces in a Document
We shall write a C Program that removes extra spaces in a document.

On our local machine, we create a file and name it `remove_extra_spaces.c` using the following bash command
```bash
touch remove_extra_spaces.c
```
Inside our `remove_extra_spaces.c` file, we write following codes
```C
#include <stdio.h>
main() /* remove extra spaces in a document */
{
    /* declare the variables to be used */
    int c;
    int previousCharSpace = 0;
    /* the variable 'previousCharSpace' tracks
    whether or not the previous character
    was a blank space or not*/
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            /* print the blank space provided
            the previous character was not 
            blank and keep track of it */
            if (!previousCharSpace)
            {
                putchar(c);
                /* set previous character blank as true*/
                previousCharSpace = 1;
            }
            
        } else if (c != ' ')
        {
            /* where the character is not a blank,
            just print the character and mark
            previous character as not blank */
            putchar(c);
            previousCharSpace = 0;
        }
        
        
    }
    
}
```

To compile our script, we use the following bash command
```bash
gcc -ansi remove_extra_spaces.c -o remove_extra_spaces
```
The above command will produce an executable file named `remove_extra_spaces` in the same directory as our `remove_extra_spaces.c` file upon successful compilation. In order to test the functionality of our C program, we save the document as `.txt` file.

To achieve this, create a `test.txt` file in the same directory using the following bash command
```bash
touch test.txt
```

In our exercise, we pasted the following lines into our `test.txt` file
```
But soft  what light     through yonder window breaks
It is    the east and  Juliet is the sun
Arise fair sun   and kill the envious moon
Who  is  already  sick  and  pale  with  grief
```

Next, to remove extra spaces from our document using our C Program, we run the following command
```bash
./remove_extra_spaces < test.txt
```
The expected result is 
```
But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief
```

Notice that the extra spaces have been removed from the document.

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