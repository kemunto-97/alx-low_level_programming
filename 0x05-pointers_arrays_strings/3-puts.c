#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by  anew line using stdout
 * @str: string to print
 * Returns:No error on success
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
