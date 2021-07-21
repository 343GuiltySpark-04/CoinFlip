#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GREEN "\x1b[32m"
#define PREFIX "%d\n"

int main()
{

	int a;

	int b = 0;

	printf(GREEN "1) Heads.\n");
	printf(GREEN "2) Tails.\n");
	printf(GREEN "Heads or Tails: ");
	scanf("%d", &b);


	srand(time(NULL));

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

	return (0);

}
