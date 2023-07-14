#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int ch;
        for (ch = 65; ch <= 90; ch++)
        {
          putchar(ch);
        }
        return (0);
}
