#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to check
 * @accept: string having the list of characters that match in s
 *
 * Return: the number of bytes in the initial segment of s
 * which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, flag;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		flag = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (c);
		}
	}

	return (0);
}
