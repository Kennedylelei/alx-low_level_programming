#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char n;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
