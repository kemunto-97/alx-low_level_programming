#include "main.h"
/**
 * main - print alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char lower;
lower = 'a';
while (lower <= 'z')
{
_putchar(lower);
lower++;
}
_putchar('\n');

