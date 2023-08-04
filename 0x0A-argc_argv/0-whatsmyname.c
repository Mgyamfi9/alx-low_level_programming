#include <stdio.h>
/**
 * main - entry point of program
 * @argc: size of argv
 * @argv: array of arguments 
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
    int i = 0;
    while (argv[0][i] != '\0')
    {
        _putchar(argv[0][i]);
        i++;
    }
    _putchar('\n');
    return 0;
}
