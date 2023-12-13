/*
Write a function that fills with two methods a string array with 26 letters of the latin alphabet.
The first method implements array indexing and the second pointers.
*/
#include <stdio.h>

void first_fun(){
    // Array indexing
    char arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 'a' + i;
        printf("%c", arr[i]);
    }
    
}

void second_fun()
{
    // Using pointers
    char arr2[26];
    char *p1;
    p1 = arr2; // now points to the first element of arr2
    for (int i = 0; i < 26; i++)
    {// Increase pointer each time and place new letter there
        *p1++ = 'a' + i;
        printf("%c", arr2[i]); 
    }
}

int main(){
    printf("Using first method: ");
    first_fun();
    printf("\n");
    printf("Using second method:");
    second_fun();
}
