#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program
 * @argc: size of argv
 * @argv: arguments to receive
 * Return: 0 always success
 */
int main(int argc, char** argv)
{
	int sum = 0;
	for (int i = 1; i < argc; i++)
	{
		int number = atoi(argv[i]);
		if (!isdigit(number))
		{
			printf("Error\n");
			return (1);
		}
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
