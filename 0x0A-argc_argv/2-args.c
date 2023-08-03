#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program
 * @argc: size of arg
 * @argv: pointer array
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
        return (0);
}
