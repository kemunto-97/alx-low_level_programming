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
int j = (_strlen(s) - 1);
char tmp;
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++, j--;
}
}
