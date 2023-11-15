#include "main.h"
/**
 * print_env - print current environment
 * Return: 0
 */
int print_env(int ac, char **av, char **env)
{
	int i = 0;

	while(env[i] != NULL)
	{
		write(1, env[i], str_len(env[i]));
		write(1, "\n", str_len("\n"));
		i++;
	}
	return (0);
}
