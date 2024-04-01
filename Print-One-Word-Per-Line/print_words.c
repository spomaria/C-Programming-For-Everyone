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