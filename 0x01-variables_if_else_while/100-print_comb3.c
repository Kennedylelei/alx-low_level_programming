#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 * Numbers msut be seperated by (,) followwed by space
 * Two digits must be different
 * 01 and 10 are considered same combinaations of 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Only use putchar and no use of char variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar("\n");

	return (0);
}
