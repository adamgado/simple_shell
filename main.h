#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>

int str_to_int(char *s);
int str_len(char *s);
char **arg_handle(char *str);
int check_file(char *s);
int print_env(void);
int comp_str(char *str1, char *str2);
void exit_shell(void);

#endif
