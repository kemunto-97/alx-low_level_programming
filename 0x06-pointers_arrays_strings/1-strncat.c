#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i]n != '\0')
i++;
while (src[j]n != src[n])
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
