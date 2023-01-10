#include "main.h"
/**
 *  _strncat - concatenate two strings
 *  using at most n bytes from src
 *  @dest: input value
 *  @src: input value
 *  @n: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
