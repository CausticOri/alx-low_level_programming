#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: the  string to print
 * return: void
 */
void print_rev(char *s)
{
	int c  = 0;

	while (s != '\0')
	{
	c++;
	}

	for (c -= 1; >= 0; c--)
	{
	putchar(s);
	}
	_putchar('\n');
}
