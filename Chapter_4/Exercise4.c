/*
Modify the program from example 4.18 so than another parameter exists
that controls and permits the display of even or odd numbers until zero.

Example 4.18:
#include <stdio.h>
#include <stdlib.h>
main (int argc, char *argv[ ])
     {    int count, line;
      if( argc<2 )
    {
     printf("Did not type initial value \n");
     printf("at the command line. \n Try again. \n");
     exit(0);
    }
        line = 0;
        for(count=atoi(argv [1]); count; --count)
        {  if (line<10)
            {
             printf ("%d  ",count);
                line++;
            }
            else {
                   line=0;
                   printf("\n");
                 }
        }
          printf("\n");
   }

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count, line;
    int even = 0;

    if (argc < 3)
    {
        printf("Did not type initial value and odd/even flag at the command line. Try again.\n");
        exit(0);
    }
    line = 0;
    for (count = atoi(argv[1]); count; --count)
    {
        if (line < 10)
        {
            if (even == 0 || (even == 1 && count % 2 == 0) || (even == 2 && count % 2 != 0))
            {
                printf("%d  ", count);
                line++;
            }
        }
        else
        {
            line = 0;
            printf("\n");
        }
    }
    printf("\n");
}