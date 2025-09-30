#include<stdio.h>
int main()
{
    int arr[4];
    int Lcv;
    printf("\n Enter 4 values in array:");
    for(Lcv=0;Lcv<=4;Lcv++)
    {
        scanf("%d",&arr[Lcv]);
    }
    printf("\n Array values are as follows:");
    for (Lcv= 0; Lcv < 4 ; Lcv++)
    {
        printf("\n %d",arr[Lcv]);
    }
}
    
