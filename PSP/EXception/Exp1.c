// Special case where value gets printed even though No "Bolean expresion is given"
#include<stdio.h>
int main()
{
int a; 
if(a) //If assigned values the if block gets excuted no matter wht.eg:-a=100 
{
    printf("hello there!");
}
else
{
    printf("Nope");
}
return 0;
}