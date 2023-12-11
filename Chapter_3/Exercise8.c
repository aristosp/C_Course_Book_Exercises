/*
An integer is called 'perfect number' when the sum of its positive divisors, including one (but not the number itself),
sum to this number. For example, 6 is a perfect number, as 6 = 1 + 2 + 3. Write a program that asks
the user to type an integer value smaller than 100 and display the corresponding message, i.e. if
the number is perfect or not.
*/

#include <stdio.h>

int main(){
    int x, i, sum = 0;
    printf("Type a number, lower than 1000 and positive\n");
    scanf("%d", &x);
    if (x > 0){
        for (i = 1; i<x; i++){ //Iterate through the numbers until x
            if (x % i == 0){ // In case the number is a divisor, add to sum
                sum += i;
            }
        }
        if (sum == x){ // If the sum is equal to x, then x is perfect, else it is not
            printf("%d is a perfect number \n", x);
        }
        else{
        printf("%d is NOT a perfect number \n", x);
        }
    }
    else{
        printf("Number is not lower than 1000 or positive.\n");
    }
}