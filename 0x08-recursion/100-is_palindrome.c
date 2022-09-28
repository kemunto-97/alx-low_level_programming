#include "main.h"

/**
 * compare - compares head and tail
 * @head: index starting left of string
 * @tail: index starting from right of string
 * Return: 1 if palindrome
 */

int compare(char *head, char *tail)
{
if (head >= tail)
{
return (1);
}

if (*head ==  *tail)
{
return (compare(head + 1, tail - 1));
}
return (0);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + (strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
int len = _strlen(s);
return (compare(s, (s + len - 1)));
}
