#include <stdio.h>
/**
 * main - Print alphabets in lower case using the putchar
 *
 * Return - 0 (Success)
 */

int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}

	return (0);
}
