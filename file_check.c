#include "main.h"
/**
 * check_file - determine if file exists and is executable
 * @s: file name to check
 * Return: 1 if true, 0 otherwise
 */
int check_file(char *s)
{
	if (access(s, X_OK) != 0)
	{
		return (0);
	}
	return (1);
}
