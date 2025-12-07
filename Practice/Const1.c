//Starting with basic of constants in C
#include <stdio.h>
#define PI 3.14 
#define add(x,y) x+y
//We can write multiple lines in macros using backslash(\) at the end of each line
#define greater(x,y) \
    if(x>y){ \
        printf("%d is greater\n", x); \
    }else{ \
        printf("%d is greater\n", y); \
    }

#define sub(a,b) a-b

int main(){
    //[1] Using defined constant
    //PI = 3.15; // This will cause a compilation error as PI is a constant
    printf("Value of PI: %.2f\n", PI);

    //[2] Using macro for addition 
    printf("%d\n", add(5, 10));

    //[3] Using macro for greater number
    greater(15, 10);

    //[4]First expansion then evaluation
    printf("Subtraction: %d\n", 5 * sub(20, 5)); //Expands to 5 * 20 - 5 = 100 - 5 = 95

    return 0; 
}



