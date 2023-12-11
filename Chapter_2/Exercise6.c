/*
Write a function named add() with two integer input variables. add returns the sum of its inputs. 
Also, write in main code that uses add() and with appropriate input/output commands gathers the user input 
and the result.
*/

#include <stdio.h>

// Declare the function that sums two integers
int add(int a, int b){
    return (a + b);
}

int main(){
    // declare variables
    int x, y, z;
    printf("Type two integer numbers: \n");
    // Store user input
    scanf("%d %d", &x, &y);
    // Compute and print the sum
    z = add(x, y);
    printf("The sum of %d and %d is %d\n", x, y, z);
}
