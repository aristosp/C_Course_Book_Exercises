/*
What is the result of the following code?
*/

#include <stdio.h>

int main(){
    int a=10, b;
    b = a++ + ++a;
    printf("%d, %d, %d, %d \n", b, a++, a, ++a);
}

/*
Ans: a++ uses the value of a and then increments, ++a increments and then uses the value of a
b = 10 + 12 = 22
printf: a++ = 13, a=14, 14
*/