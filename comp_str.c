#include "main.h"
/**
 * comp_str - compares two strings
 * @str1: string 1
 * @str2: string 2
 * Return: -1 if str1 < str2, 1 if str1 > str2, 0 if str1 = str2
 */
int comp_str(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}
