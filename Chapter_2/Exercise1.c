/*
Write a program that computes the following statements, denoting which are true and which are false
a. 10 == 9+1    c.0 && 0    e.when x=10 and y=9, calculate: x>=8 && y<=x
b. 10 && 8      d. 8 || 0 
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    // create a boolean variable and store the result of each statement
    bool statement1 = (10 == (9+1));
    printf("%s\n", statement1 ? "True" : "False");

    bool statement2 = (10 && 8);
    printf("%s\n", statement2 ? "True" : "False");

    bool statement3 = (0 && 0);
    printf("%s\n", statement3 ? "True" : "False");

    bool statement4 = (8 || 0);
    printf("%s\n", statement4 ? "True" : "False");

    int x = 10, y = 9;
    bool statement5 = (x == 10 && y == 9) ? (x >= 8 && y <= x) : false;
    printf("%s\n", statement5 ? "True" : "False");
}
