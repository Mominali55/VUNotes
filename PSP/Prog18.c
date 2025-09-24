//Nested loop
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=3; i++) //Outer loop
    {
        for (j = 1; j < 3; j++) //Inner loop
        {
           // printf("\n hello..");
           printf("%d \t %d\n", i, j);
           // printf("\n");
        }
        
    }
    return 0;
}
//Here inner loop changes frequemtly as compared to outer loop.