#include <stdio.h>
/**
 * main - Print all possible combinations of single-digit numbers
 * Numbers should be seperated (,) followed by space
 * Ascending order using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
