#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int targetNumber, guess;
    int attempts = 0;
    srand(time(0)); // Seed for generating random number
    targetNumber = rand() % 100 + 1; // Generate random number between 1 and 100
	
	printf("\n\n\n\n");
    printf("Welcome to the Number Guessing Game!\n");
	printf("\n");
    printf("Try to guess the number between 1 and 100.\n");
	printf("\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
		printf("\n");
        attempts++;

        if (guess < targetNumber) {
            printf("Too low! Try again.\n");
			printf("\n");
        } else if (guess > targetNumber) {
            printf("Too high! Try again.\n");
			printf("\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly in %d attempts.\n", targetNumber, attempts);
			printf("\n\n");
        }
    } while (guess != targetNumber);

    return 0;
}
