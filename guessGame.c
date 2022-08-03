/*guessGame.c, Noah Guthrie, 2021-11-08*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  //initialize integers
  int guess, userNum;
  //get a different random number on every play through
  srand(time(NULL));
  int goal = rand() % 50 + 1;

  //start loop, while the users number of guesses is below 10
  while(guess < 10){
    //read user input
    puts("Enter your guess (between 1 and 50)");
    scanf("%d", &userNum);
    guess++;//increase counter for number of guesses
    
    //compare each guess with the random number generated to start
    if(userNum == goal){
      printf("Correct, the number was %d\n", goal);
      break;//if the guess is correct then terminate
    }
    else if(userNum > goal){
      printf("Too high...\n");
    }
    else if(userNum < goal){
      printf("Too low...\n");
    }
    if(guess == 10){
      printf("Sorry, the number was %d\n", goal);
      break;//if number of guesses allowed is exceeded, then terminate
    }
  }//end loop
}