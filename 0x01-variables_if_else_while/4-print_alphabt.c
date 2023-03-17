#include <stdio.h>
/**
 * main - Print all lower case alphabets except q & e using putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');

	return (0);
}
