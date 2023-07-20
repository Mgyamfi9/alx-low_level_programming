#include <stdio.h>
/**
 * fizz_buzz - prints fizzbuzz
 * 
 * Return: 0 success
 *
 */
int fizz_buzz(void)
{
	int i;
	/*variable declarations*/
	for (i = 1; i<= 100; i++)
	{
		if ( i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if(i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
/**
 * main - entry point of code
 *
 * Return: 0 is success
 *
 */
int main(void)
{
	fizz_buzz();
	return (0);
}