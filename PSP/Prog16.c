//Loop control statements: break, continue, goto
#include <stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        if(i==5)
        {
            //break;      //it will terminate the loop when i=5
            continue;    //it will skip the iteration when i=5
        }
        printf("%d\n", i);
    }
    return 0;
}