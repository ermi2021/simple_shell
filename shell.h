#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * struct builtins - Has builtins and associated funcs
 * @arg: Builtins name
 * @builtin: Mathcing builtin func
 */
typedef struct builtins
{
	char *arg;
	void (*builtin)(char **args, char *line, char **env);
} builtins_t;

void exit_shell(char **args, char *line, char **env);
void print_env(char **args, char *line, char **env);
#endif
