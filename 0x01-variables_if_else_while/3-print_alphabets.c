#include <stdio.h>
/**
 * main - Print alphabets in lower case using, then uppercase using the putchar
 *
 * Return: - 0 (Success)
 */

int main(void)
{
        int x,k;

        for (x = 'a'; x <= 'z'; x++)
        {
                putchar(x);
        }
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
        putchar('\n');

        return (0);
}
