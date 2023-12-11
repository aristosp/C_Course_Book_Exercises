/*
Write four functions, with each having two integer parameters. 
The first returns the sum, the second the difference, the third the product
and the fourth the quotient. Then, an appropriate message should print the results.
*/

#include <stdio.h>

// Declare the functions
int add(int a, int b)
{
    return (a + b);
}

int diff(int a, int b){
    return (a - b);
}

int prod(int a, int b){
    return (a * b);
}

int div(int a, int b){
    return (a / b);
}

int main(){
    int x, y;
    printf("Type two integers: \n");
    scanf("%d %d", &x, &y);
    printf("Sum is %d \n", add(x, y));
    printf("Difference is %d \n", diff(x, y));
    printf("Product is %d \n", prod(x, y));
    printf("Quotient is %d, (truncated) \n", div(x, y));
}
