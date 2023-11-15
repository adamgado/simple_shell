#include "main.h"
/**
 * main - activates the shell
 * Return: 0
 */
int main()
{
	char buffer[32];
	char *b = buffer;
	size_t bufsize = 32;
	size_t characters;
	char **args;
	
	while(characters)
	{
		write(1, "$ ", str_len("$ "));
		characters = getline(&b,&bufsize,stdin);
		
		if(characters == -1)
		{
			write(1, "error\n", str_len("error\n"));
		} else {
			
			args = **arg_handle(b);

			if(check_file(args[0]) == 0)
			{
				write(1, "No such file or directory \n", str_len("No such file or directory \n"));
			}
			if(comp_str(b, "env") == 0)
			{
				print_env()
			}
			else if(comp_str(b, "exit") == 0)
			{
				exit_shell()
			}
		}
	}
	
	free(args);
	return(0);
}
