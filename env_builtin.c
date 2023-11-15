#include "main.h"
/**
 * print_env - print current environment
 * Return: 0
 */
int print_env()
{
	int i = 0;
	extern char **environ;

	while(environ[i] != NULL)
	{
		write(1, environ[i], str_len(environ[i]));
		write(1, "\n", str_len("\n"));
		i++;
	}
	return (0);
}
