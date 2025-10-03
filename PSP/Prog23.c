/*
Two Dimensional Array in C (Sometimes known as Matrix)
Syntax:-
    data_type_name[rows][columns] or data_type_name[index1/subscript1][index2/subscript2]
    
    Eg:-
    int twodimen_Array[4][4]
    -The numbers can be x,y(Depends on user)

    How to know how many values does the Two-dimensional stores?
  => x*y=(Result)
*/
#include<stdio.h>
int main()
{
    int arr[2][2];
    int i,j;
    printf("Enter values into array\n");
    scanf("%d",&arr[0][0]);
    scanf("%d",&arr[0][1]);
    scanf("%d",&arr[1][0]);
    scanf("%d",&arr[1][1]);
    printf("\n Output:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}