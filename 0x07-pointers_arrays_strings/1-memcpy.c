#include "main.h"

/**
 * _memcpy - copy bytes of memory to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int size = n;

if (size > 0)
{
int i;

for (i = 0; 1 < size, i++)
	dest[i] = src[i];
}
return (dest);
}
