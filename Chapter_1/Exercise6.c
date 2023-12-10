/* 
What will the following program return?
Ans. 
Each strlen function returns the number of its input word, so:
4 (blue) + 6 (purple) / 3 (red) - 5 (green) = 1
*/


#include <stdio.h>
#include <string.h>

int main(){
    int i = strlen("blue") + strlen("purple")/strlen("red") - strlen("green");
    printf("\n %d", i);
}