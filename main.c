#include "main.h"
/**
 * main - activates the shell
 * Return: 0
 */
int main(void)
{
	char buffer[32];
	char *b = buffer;
	size_t bufsize = 32;
	size_t characters;
	int chars;
	size_t e = str_to_int("^C");

	while (characters != e)
	{
		write(1, "$ ", str_len("$ "));
		characters = getline(&b, &bufsize, stdin);
		chars = characters;

		if (chars == -1)
		{
			write(1, "error\n", str_len("error\n"));
		} else
		{
			if (check_file(b) == 0)
			{
				write(1, "No such file or directory \n", 27);
			}
			 if (comp_str(b, "exit") == 0)
			{
				exit_shell();
			}
		}
	}
	return (0);
}
