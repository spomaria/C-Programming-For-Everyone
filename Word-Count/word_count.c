#include <stdio.h>
main() /* count number of words in input */
{
    /* declare the variables to be used */
    int c, n_words, inWord;
    /* initializing the variable that indicates whether we
    are currently in a word or not*/
    inWord = 0;
    while ((c = getchar()) != EOF){
        /* checking if the next character is
    an end of line, blank, or tab. Where the condition holds true,
    we increment the number of words*/
        if (c == ' ' || c == '\t' || c == '\n'){
            /* if we were in a word i.e. inWord = 1
            and we encounter either a blank, a tab,
            or an end of line, that makes the end of the word
            and therefore should be counted*/
            if (inWord){
                ++n_words;
                /* reset the status of inWord
                meaning we are no longer in a word*/
                inWord = 0;
            }
        } else{
            /* where the character encounter is not a blank,
            or a tab or an end of line, it means
            we are in a word*/
            inWord = 1;
        }

    }
            
    printf("Document has %d words\n", n_words);
}