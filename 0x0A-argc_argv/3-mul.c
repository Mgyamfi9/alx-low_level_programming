#include <stdio.h>
/**
 * main - entry point of function
 * @argc: size of arguments
 * @argv: pointer array
 * Return: 0 always success
 */
int main(int argc, char** argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int first_number = atoi(argv[1]);
	int second_number = atoi(argv[2]);
	int product = first_number * second_number;
	printf("%d\n", product);
	return (0);
}
