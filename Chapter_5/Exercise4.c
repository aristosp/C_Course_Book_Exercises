/*
Write a program that uses the argc and argv parameters. Typing the parameters from the command line:
-a 3.5 -b 8.12 -c "C language" -d 3.14 156
should print:
a = 35
b = 8.12
c = "C language"
d1 = 3.14
d2 = 156
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    double a, b, d1, d2;
    char c[100];

    for (int i = 1; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            switch (argv[i][1])
            {
            case 'a':
                a = atof(argv[i + 1]) * 10;
                break;
            case 'b':
                b = atof(argv[i + 1]);
                break;
            case 'c':
                strcpy(c, argv[i + 1]);
                break;
            case 'd':
                d1 = atof(argv[i + 1]);
                i++;
                if (i + 1 < argc && argv[i + 1][0] != '-')
                    d2 = atof(argv[i + 1]);
                break;
            default:
                break;
            }
        }
    }

    printf("a = %.2f ", a);
    printf("b = %.2f ", b);
    printf("c = \"%s\"\n", c);
    printf("d1 = %.2f ", d1);
    printf("d2 = %.2f ", d2);

    return 0;
}