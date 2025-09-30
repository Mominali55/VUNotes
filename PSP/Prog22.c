//Array initialization 
#include<stdio.h>
int main()
{
    float per[]={78.90,34.56,67.90,70.30};
    char name[10];
    int i,lcv;
    for (lcv= 0; lcv < 4; lcv++)
    {
        printf("\n %.7f",per[lcv]);
    }
    printf("\n");
    return 0;

}