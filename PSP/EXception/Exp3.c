//Getchar Exception "user_char" and "\n" (newline) character
#include <stdio.h>
int main()
{
    char c1,c2;
    printf("Enter a characters: ");
    c1=getchar(); //user_char
    printf("\n Enter another character: ");
    c2=getchar(); //newline character "\n"
    getchar(); //to consume the newline character from buffer
    //You can use this also For Clear Display of putchar() function.
    //The line: c2=getchar(); 
    putchar(c1);
    putchar(c2); //it will print newline character
    return 0;
}