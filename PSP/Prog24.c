// Array 3 Dimensional
//Usually used in Graphic & Architecture

#include<stdio.h>
int main()
{
    int arr[2][2][2];
    int i,j,k;
    printf("Enter 8 values into Array:");
    for(i=0;i<2;i++)
    {
        for (j= 0; j < 2; j++)
        {
        
            for (k = 0; k < 2; k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
               
        }
        
    }

    printf("Output:\n");
    for(i=0;i<2;i++)
    {
        for (j= 0;  j < 2; j++)
        {
        
            for (k = 0; k < 2; k++)
            {
                printf("%d \t",arr[i][j][k]);
            }
            printf("\n");
        }
        
    }
}    



