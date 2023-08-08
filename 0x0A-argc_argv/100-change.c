#include <stdio.h>
#include <stdlib.h>
/**
*miinimum_coins - minimum coins to find
*@cents - amount of cents to give back
*Return: 0 always success
*/
int minimum_coins(int cents)
{
	int num_coins, i;
	/*variables*/
	if (cents < 0)
	{
		return (0);
	}
	int coins[] = {25, 10, 5, 2, 1};
	num_coins = 0;
	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}
	return (num_coins);
}
/**
*main - entry point of program
*@argc: size of argv
*@argv:pointer array of arguments
*Return: 0 always success
*/
int main(int argc, char *argv[])
{
	int cents;
	/*variable declaration*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	printf("%d\n", minimum_coins(cents));
	return (0);
}
