#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 * Return:If  str1 < str2, the negative difference of the first unmatched characters.
 * If  str1 == str2, 0.
 * If  str1 > str2, the positive difference of the first unmatched characters.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
