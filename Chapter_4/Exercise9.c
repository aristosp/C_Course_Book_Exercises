/*
Write a function that returns 1 or 0 depending on its integer input. If the number is odd, return 1
and if the number is even, return 0.
Hint: You can use the bitwise operator &
*/

#include <stdio.h>

int check(int num){
    if (num % 2 == 0){
        return 1;
    }
    else
        return 0;
}

int main(){
    int number;
    printf("Type integer \n");
    scanf("%d", &number);
    printf("%d", check(number));
}