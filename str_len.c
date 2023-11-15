#include "main.h"
/**
 * str_len - return length of string
 * @s: string to check
 * Return: length of string
 */
int str_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
