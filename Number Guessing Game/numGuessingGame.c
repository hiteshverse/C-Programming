#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int guess, guesses, answer;
	const int MIN = 10;
	const int MAX = 100;
	guesses = 0;

	srand(time(0));
	answer = (rand() % MAX) + MIN;

	do
	{
		printf("Enter Guess: ");
		scanf("%d", &guess);
		if (guess > answer)
		{
			printf("Too High\n");
		}
		else if (guess < answer)
		{
			printf("Too Low\n");
		}
		else
		{
			printf("CORRECT!!\n");
		}
		guesses++;
	} while (guess != answer);

	printf("*********************");
	printf("\nAnswer: %d", answer);
	printf("\nGuesses: %d", guesses);
	printf("\n*********************");

	return 0;
}
