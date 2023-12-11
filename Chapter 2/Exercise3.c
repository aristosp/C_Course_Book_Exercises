/*
Run the following snippet and comment on the value of count variable.
*/
#include <stdio.h>

int main(){
    int x, *y, count;
    x = 100;
    count = 999;
    printf("Count is : %d\n", count);
    y = &x;
    count = *y;
    printf("Count is : %d\n", count);
}
/*
Ans: y points to the memory address of x and then count receives the value stored in the memory adress that y points to, i.e. x.
Thus, count initially is set to 999 and then is equal to 100.
*/