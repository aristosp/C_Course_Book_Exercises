/*
Write a program that reads a sentence from the keyboard and then counts the number of blank spaces
which are then replaced by '+'. Also, print the number of characters for each word and the total number
of characters that were typed.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100]; //assume maximum length of 100 characters
    int spaces = 0;
    int totalCharacters = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); //read the input sentence

    int length = strlen(sentence);

    for (int i = 0; i < length; i++)
    {
        if (sentence[i] == ' ') // replace blank space with '+'
        {
            sentence[i] = '+';
            spaces++;
        }
        totalCharacters++;
    }

    printf("\nModified sentence: %s", sentence);
  printf("Number of blank spaces replaced: %d\n", spaces);
  
  char temp[100];
  strcpy(temp, sentence);
  
  char* word = strtok(temp, " ");
  printf("\nNumber of characters for each word:\n");
  
  while (word != NULL) {
    printf("%s: %d", word, strlen(word));
    word = strtok(NULL, " "); // count the number of characters
  }
  
  printf("\nTotal number of characters typed: %d\n", totalCharacters-1);
  
  return 0;
}