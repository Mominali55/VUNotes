//String Representation in Multidimensional array
//This string has a limit of 10 only
#include<stdio.h>
void main()
{
    char ch[10];
    int i;
    printf("enter Your name \n");
    for(i=0;i<10;i++){
        scanf("%c",&ch[i]);
    }
    for(i=0;i<10;i++){
        printf("%c",ch[i]);
    }
}
