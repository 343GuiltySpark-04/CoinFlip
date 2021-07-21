#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define PREFIX "%d\n"

int set_rand_seed()
{

	srand(time(NULL));
}

int flip()
{

	int a;

	int b = 0;

	printf(GREEN "1) Heads.\n");
	printf(GREEN "2) Tails.\n");
	printf(GREEN "Heads or Tails: ");
	scanf("%d", &b);

	a = rand() % 2;

	a += 1;

	if (a == 1 && b == 1)
	{

		printf(GREEN "Heads\n");
		printf(GREEN ":)");
	}
	else if (a == 1 && b == 2)
	{
		printf(GREEN "Heads\n");
		printf(GREEN "Sorry Pal");
	}
	else if (a == 2 && b == 2)
	{

		printf(GREEN "Tails\n");
		printf(GREEN ":)");
	}
	else if (a == 2 && b == 1)
	{

		printf(GREEN "Tails\n");
		printf(GREEN "Sorry Pal");
	}

	if (b == 0)
	{

		printf(RED "ERROR: handling for Letter (or values of 0 or less) input not implemented yet, exiting!");
		exit(2);
	}

	printf("\n");
}

int main()
{

	set_rand_seed();

	flip();

	bool active = true;

	int again = 0;

	while (active == true)
	{

		again = 0;

		printf(GREEN "1) Yes.\n");
		printf(GREEN "2) No.\n");
		printf(GREEN "Flip Again: ");
		scanf("%d", &again);

		
		if (again == 0)
		{
			//active = false;
			printf(RED "ERROR: handling for Letter (or values of 0 or less) input not implemented yet, exiting!");
			exit(2);
		}

		if (again == 1)
		{

			flip();
		}
		else if (again == 2)
		{

			active = false;
		}

	}

	printf(GREEN "\nGoodbye!");

	return (0);
}
