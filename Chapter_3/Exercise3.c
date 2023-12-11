/*
Write a function that returns the maximum value out of its two inputs.
*/

#include <stdio.h>

int max(int a, int b){
    // Check if a is larger than b and return a
    if (a > b){
        return a;
    }
    else if (a < b){ // else return b
        return b;
    }
    else{
        printf("Equal\n");
        return a; // return either as they are equal
    }
}

int main(){
    int x, y;
    printf("Type two integers: \n");
    scanf("%d %d", &x, &y);
    printf("Out of the two, larger is %d \n", max(x, y));
}