#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: returns number of arguments
 * @argv: returns array of arguments
 * Returns: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n",argc - 1);
	return (0);
}
