#include "main.h"

/**
 * _memset - Fills the first n bytes ofmemory area
 * @s: A pointer whose memory is filled
 * @c: The character to fill memory area with
 * @n: no. of bytes to be filled
 * description _memset: mdhsns
 * Return: Pointer to fill memory area
 */

void *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
unsigned char *memory = s, value = c;

for (index = 0; index < n; index++)
memory[index] = value;

return(memory);
}
