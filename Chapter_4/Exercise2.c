/*
What will the following program display?
*/

#include <stdio.h>

void set(void), print(void); float averag(int, int);
float a; int x, y;

int main(){
    int x, y; x = y = 4; set();
    a = averag(x, y); print();
    printf("a = %f \n", a);
}

void set(void){
    x = 10; y = 20;
}

void print(void){
    a = 0;
    printf("x = %d y = %d \n", x, y);
}

float averag(int k, int m){
    float average;
    average = (k + m)/2.0;
    return (average);
}

/*
Ans. Initially x and y are set to 10 and 20 respectively, 
then a is set 0 in the void print function so that will be displayed.
*/