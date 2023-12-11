/*
Write a pair of functions that operate on a global variable named counter. Func1() increases counter by one,
Func2() decreases counter by one. Write code in main that using appropriate input/output commands checks the results
of the two functions.
*/

#include <stdio.h>
// declare counter as global variable
int counter;

// Define the two functions
int Func1(int x){
    return x += 1;
}

int Func2(int x)
{
    return x -= 1;
}

int main(){
    
    printf("Type one integer number: \n");
    // Store user input
    scanf("%d", &counter);
    counter = Func1(counter);
    printf("Counter now is %d \n", counter);
    counter = Func2(counter);
    printf("Counter now is %d \n", counter);
}