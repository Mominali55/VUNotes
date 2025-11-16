#include<stdio.h>
int sum(int n); 

void main() {
    int number,result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
    printf("Sum = %d\n", result);
}

int sum(int n) {
    if (n != 0)
        return n + sum(n - 1); 
    else
        return n;
}

/*
Full explanation of how  recursive is working in this program:
1. The program starts by prompting the user to enter a positive integer.
2. The user inputs a number, which is read and stored in the variable 'number'.
3. The 'sum' function is called with 'number' as its argument.
4. Inside the 'sum' function, it checks if 'n' is not equal to 0.
5. If 'n' is not 0, it returns 'n' plus the result of calling 'sum' with 'n - 1'.
6. This process continues, decrementing 'n' by 1 each time, until 'n' reaches 0.
7. When 'n' is 0, the function returns 0.
8. The recursive calls then start to resolve, adding up all the values from 'n' down to 1.
9. Finally, the total sum is returned to the main function and printed to the console.
*/
