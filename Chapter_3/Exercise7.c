/*
Try to improve the program of secret number in example 3.17 to remind the user how many
tries he has left before the total number is reached.
Example 3.17:

#include <stdio.h>
     main( )
{
    int option;
     int value=0;
        char keno;
            printf("  Secret number program \n ");
            printf("(Secret number must not be zero) \n\n");
   do {
            printf("Choose one option \n\n");
            printf("  1. Set a new secret number \n");
            printf("  2. Begin match \n");
            printf("  3. End \n");
    do {
           printf("\n Type your choice : ");
           option=0;
           scanf("%d%c", &option, &keno);
         } while (option<1 || option >3);
              switch(option)
            {
                case 1 :   // Create a new secret number
                    value=new_number( );
                    break;
                case 2 :   //  Game initializes
                    if(!value)
                    { printf("Secret number was not set. \n\n");
                        break;
                    }
                    play (value);
                    break;
                case 3 :     //  End program
             printf ("\n  End program \n");
                    break;
            }
         } while (option!=3);
     }

int new_number()
{
        int t,number;
        char keno;
        do {
            number=0;
           printf("\n Type a new non-zero secret number:");
            scanf("%d%c",&number,&keno);
                  } while (!number);
         for(t=0;t<25;t++)
           printf("\n");
         return (number);
       }

int play(int m)
{
     int t, x;
     char keno;
            for( t=0; t<10; t++)
               {
                do {
                      x=0;
                      printf("\n Predict secret number: ");
                      scanf("%d%c", &x, &keno);
                    } while (!x);
                    if( x == m )
                {
                  printf("*** Correct *** \n\n");
                  return (0);
                }
                 else
                   if ( x<m ) printf("%d is smaller than secret ", x);
                     else printf("%d is larger than secret ", x);
            }

        printf("\n All tries were used. ");
        printf("\n Secret number was not found. ");
        printf("\n     Try again ...\n\n");
          return(0);
}

*/

#include <stdio.h>
main()
{
    int option;
    int value = 0;
    char keno;
    printf("  Secret number program \n ");
    printf("(Secret number must not be zero) \n\n");
    do
    {
        printf("Choose one option \n\n");
        printf("  1. Set a new secret number \n");
        printf("  2. Begin match \n");
        printf("  3. End \n");
        do
        {
            printf("\n Type your choice : ");
            option = 0;
            scanf("%d%c", &option, &keno);
        } while (option < 1 || option > 3);
        switch (option)
        {
        case 1: // Create a new secret number
            value = new_number();
            break;
        case 2: //  Game initializes
            if (!value)
            {
                printf("Secret number was not set. \n\n");
                break;
            }
            play(value);
            break;
        case 3: //  End program
            printf("\n  End program \n");
            break;
        }
    } while (option != 3);
}

int new_number()
{
    int t, number;
    char keno;
    do
    {
        number = 0;
        printf("\n Type a new non-zero secret number:");
        scanf("%d%c", &number, &keno);
    } while (!number);
    for (t = 0; t < 25; t++)
        printf("\n");
    return (number);
}

int play(int m)
{
    int t, x;
    char keno;
    for (t = 0; t < 10; t++)
    {
        do
        {
            x = 0;
            printf("\n Predict secret number: ");
            scanf("%d%c", &x, &keno);
        } while (!x);
        if (x == m)
        {
            printf("*** Correct *** \n\n");
            return (0);
        }
        else if (x < m)
            printf("%d is smaller than secret \n", x);
        else
            printf("%d is larger than secret \n", x);
        printf("Try %d . Tries Left %d", t + 1, 10 - t - 1); // ADDED LINE
    }

    printf("\n All tries were used. ");
    printf("\n Secret number was not found. ");
    printf("\n     Try again ...\n\n");
    return (0);
}