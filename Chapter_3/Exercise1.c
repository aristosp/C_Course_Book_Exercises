/*
What will be the output of the following program?
*/

#include <stdio.h>

int main(){
    int i = 0;
    for (i = 0; i < 10; i++){
        switch (i)
        {
        case 0: i = i + 4;
        case 2: i = i + 1;
        case 3: i = i + 3;
        break;
        }
        printf("\t%d", i);
    }
}

/*
Initially i = 0. Case 0  results in i = 4, so first print is 4. But break commands are missing.
Thus, i continues to increase at 8 and then at 9.
*/
