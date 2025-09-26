/*
Array in c
--An array is a collection of similar type of data items stored at contiguous memory locations.
--It is a collection of variables of same type.
--It is used to store multiple values in a single variable instead of declaring separate variables for each value.
--To access the elements of an array we use the index number.
--Index number starts from 0 to n-1 where n is the size of the array 
*/
#include<stdio.h>
int main()
{
    int recd[4];
    int Lcv;
    printf("Enter the 4 numbers\n");
    recd[0]=57;
    recd[1]=76;
    recd[2]=78;
    recd[3]=85;
    for(Lcv=0;Lcv<4;Lcv++)
    {
        printf("The number at index %d is %d\n",Lcv,recd[Lcv]);
    }
    return 0;
}