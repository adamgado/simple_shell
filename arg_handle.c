#include "main.h"
/**
 * **arg_handle - function that seperates a string into seperate arguments
 * @str: string to seperate into arguments
 * Return: an array of strings
 */
char **arg_handle(char *str)
{
	char *argument;
	char *delim = " ";
	int s = 0;
	char **args;

	args = malloc(sizeof(char *) * 1024);

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}

	argument = strtok(str, delim);
	args[s] = argument;

	while (comp_str(argument, "\0") != 0)
	{
		s++;
		argument = strtok(NULL, delim);
		args[s] = argument;
	}
	args[s] = NULL;

	return (args);
}
