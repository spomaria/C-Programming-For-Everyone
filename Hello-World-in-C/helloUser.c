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