#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
int i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
{
putchar(*(str + i));
i++;
}
putchar(10);
}
