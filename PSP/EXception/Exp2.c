//Getting and displaying character
#include <stdio.h>
int main()
{
    int c; //char
    printf("Enter a character: ");
    c = getchar(); //getchar() function
    printf("You have passed: ");
    putchar(c); //putchar() function :to display character
    printf("\n %d \n", c); //ASCII value of character
    return 0;
}