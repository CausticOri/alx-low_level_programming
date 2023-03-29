#include <stdio.h>

/**
 * _strien - returns the length of a string
 * @s: string
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t length  = 0;

	while (*str++)
	length++;
	return (length);
}
