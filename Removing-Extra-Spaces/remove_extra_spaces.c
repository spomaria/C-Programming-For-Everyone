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