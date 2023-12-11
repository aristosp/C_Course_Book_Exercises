/*
Run the following snippet and comment on the value of z variable.
*/
#include <stdio.h>

int main()
{
    int z, x = 5, y = -10, a = 4, b = 2;
    z = x++ - --y*b/a;
    printf("z is : %d\n", z);
}
/*
Ans: x is used and then incremented, y is decreased and then used so:
z = 5 - (-11 * 2 / 4) = 10.5 ~= 10
*/