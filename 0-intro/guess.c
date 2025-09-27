#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int max = 100;
  int secret;
  int tries = 7;
  int guess;

  // 1. Display the game rule
  printf("The computer will generate a number between 1 and %d\n"
         "You have %d chances.\n",
         max, tries);

  // 2. generate a secret number
  srand(time(NULL));
  secret = rand() % max + 1;
  printf("secret: %d\n", secret);

  while (tries > 0) {
    // 3. ask the player to enter a number
    printf("Enter a number\n");
    // 4. receive the guessed number
    scanf("%d", &guess);
    // 5. compare the number with the secret nubmer and inform the player of the
    // result
    if (guess == secret) {
      printf("You Win!\n");
      break;
    } else if (guess > secret) {
      printf("guess > secret\n");
    } else {
      printf("guess < secret\n");
    }
    tries--;
  }

  if (tries == 0) {
    printf("You lose!\n");
  }

  return 0;
}
