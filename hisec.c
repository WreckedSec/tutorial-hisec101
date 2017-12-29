#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main()
{
  bool debug=false;
  char *input = malloc(7 * sizeof(char));
  char *correct = malloc(7 *sizeof(char)); //"NoH4x0r";
  char *command = malloc(10 *sizeof(char));
  strcpy(correct, "NoH4x0r");
  bool access = false;
  while(1)
  {
    if(access)
    {
      printf("Enter your command: ");
      gets(command);
      if(strcmp(command, "exit")==0)
      {
        exit(0);
      }
      system(command);
    }
    else
    {
      printf("\n*** HiSecSys v.1.0.0 ***\nEnter password:");
      gets(input);
      if(debug)
      {
        printf("Debug:\n");
        printf("Input: %s\n", input);
        printf("Correct: %s\n", correct);
        printf("Distance: %ld\n", correct-input);
      }
      if(strcmp(input, correct) != 0)
      {
        printf("*********************\n");
        printf("*  Intruder alert!  *\n");
        printf("*********************\n");
      }
      else{
        printf("\n*** Access granted! ***\n");
        access = true;
      }
    }
  }
}
