#include "main.h"

/**
 * *_memset -fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of time to copy b
 *
 * Return: pointer to the memory areai @s.
 */

char *_memset(char *s, char b, unsiged int n)

{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}

