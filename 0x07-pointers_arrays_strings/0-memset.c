#include "main.h"

/**
 * _memset - Fills the first n bytes ofmemory area
 * @s: A pointer whose memory is filled
 * @b: The character to fill memory area with
 * @n: no. of bytes to be filled
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
int size = n;

if (size > 0)
{
int i;

for (i = 0; i < size; i++)
s[i] = b;

return (s);
}
