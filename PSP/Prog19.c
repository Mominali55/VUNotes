//Program to demonstrate the use of getchar(), getche() and getch() functions.
#include<stdio.h>
int main()
{
    char a,c,d;
    int b;
    printf("\n Enter a ch:");
    a=getchar();
    printf("\n %c", a);
    getchar();

    b=getc(stdin); //stdin=standard input device (Keyboard)
    printf("\n %c", b);
    getchar();

    printf("\n Enter a ch for c:");
    c=getchar(); //getche() function auto display the character
    printf("\n %c", c);

    d=getchar(); //getch() function
    /*
    -Note that getch() does not work in modern compilers like CodeBlocks, DevC++, etc. but works in Turbo C.
    -So we using getchar() instead of getche().
    -here the main diffrence is the clock speed of the system.while using getch() the system is fast enough to capture the character without pressing enter key.
    */
    printf("\n %c", d);
    getchar();
    return 0;

}