/*
Calculate the product of two integers provided by the user through the console
P.S. This program was given as an example from the book. The purpose of this exercise was to run it.
*/


#include <stdio.h>
#include <stdlib.h>

//Function that calculates the product of two input parameters
int mul(int x, int y){
    return (x*y);
}


// Function that converts input strings to integers
int getnum2(){
    char s[80];
    gets(s);
    return atoi(s);
}



int main(){
    int a, b, c;
    printf("Pass two numbers:\n");
    a = getnum2(); // Store the inputs into two variables
    b = getnum2();
    c = mul(a, b); // Calculate the product and store it
    printf("The product of the two numbers is: %d \n", c);
    system("pause");
}
