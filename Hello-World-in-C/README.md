# Hello World in C Programming

## Introduction
In this course, I am learning the how to gain programming mastery in the C Programming for Everyone Course at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Hello World
We begin our C Programming by writing Hello World just as we do in other programming languages.

On our local machine, we create a file and name it `hello.c` using the following bash command
```bash
touch hello.c
```
Inside our `hello.c` file, we write our codes to print `Hello, world` as follows
```C
#include <stdio.h>
main(){
    printf("Hello, world\n");
}
```

To compile our script, we use the following bash command
```bash
gcc -ansi hello.c
```
This will produce a `a.out` file in the same directory as our `hello.c` file upon successful compilation. In order to view the output of our script, we run the following bash command
```bash
./a.out
```

## Hello User
Furthermore, we can try something a bit more challenging by asking the user their name and saying personal hello to them. To accomplish this task, we create another file and name it `helloUser.c` by using the following bash command
```bash
touch helloUser.c
```
Inside our `helloUser.c` file, we write our codes to read user input and save as `name` and afterwards, say hello to the uer by referring to their name as follows
```C
#include <stdio.h>
int main(){
    /* declare the name variable 
    we assume that the 'name' cannot be more than 100 characters
    */ 
    char name[100];
    /* Prompt user to enter their name*/
    printf("Please enter your name\n");
    /* read input from user and assign to the 'name' variable 
    Note that 'scanf' does not read spaces and therefore, cannot read more than
    one word (name)
    */
    scanf("%s", name);
    /* greet the user by calling the name entered */
    printf("Hello, %s\n", name);
    /* Congratulate the user*/
    printf("Congratulations %s on starting the C Programming for Everyone Course\n", name);
}
```

To compile our script, we use the following bash command
```bash
gcc -ansi helloUser.c
```
This will produce a `a.out` file in the same directory as our `helloUser.c` file upon successful compilation. In order to interact with our program, we run the following bash command
```bash
./a.out
```
and follow the prompts that follow.


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