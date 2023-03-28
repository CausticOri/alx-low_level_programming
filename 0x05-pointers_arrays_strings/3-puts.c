#include "main.h"
/**
 * puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void_puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
