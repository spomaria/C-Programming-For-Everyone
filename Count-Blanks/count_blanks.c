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