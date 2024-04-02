# C Program that Counts the Number of Words in a Document

## Introduction
In this course, I am learning the how to gain programming mastery in the C Programming for Everyone Course at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Counting the Number of Words in a Document
We shall write a C Program that counts the number of words in a given document.

On our local machine, we create a file and name it `word_count.c` using the following bash command
```bash
touch word_count.c
```
Inside our `word_count.c` file, we write following codes
```C
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
```

To compile our script, we use the following bash command
```bash
gcc -ansi word_count.c -o word_count
```
The above command will produce an executable file named `word_count` in the same directory as our `word_count.c` file upon successful compilation. In order to test the functionality of our C program, we save the document as `.txt` file.

To achieve this, create a `input.txt` file in the same directory using the following bash command
```bash
touch input.txt
```

In our exercise, we pasted the following lines into our `input.txt` file
```
But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief

```

Next, to count the number of words in our document using our C Program, we run the following command
```bash
./word_count < input.txt
```
The expected result is `Document has 33 words`.

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