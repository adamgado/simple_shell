#include "main.h"
/**
 * str_to_int - function that converts string to int
 * @s: string to convert
 * Return: converted int
 */
int str_to_int(char *s)
{
	int i, sign = 1, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
