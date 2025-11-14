#include<stdio.h>
#include<string.h>
void main()
{
    char ch[10];
    char name[10];
    printf("Enter your college name:\n");
    fgets(ch,10,stdin);; //to get string
    puts(ch);
    printf("Enter your name:\n");
    scanf("%s",name);
    printf("\n %s",name);
}