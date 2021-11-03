#include "shell.h"

/**
 * exit_shell - this will exit the shell
 * @line: Line buffer of user input
 * @args: arguments
 * @env: environment
 * Return: void
 */
void exit_shell(char **args, char *line, char **env)
{
	free(args);
	free(line);
	(void)env;
	exit(0);
}
/**
 * print_env - Prints shell environment
 * @args: arguments
 * @line: user input buffer
 * @env: Environment
 * Return: void
 */
void print_env(char **args, char *line, char **env)
{
	int s, i;

	i = 0;
	while (env[i])
	{
		s = strlen(env[i]);
		write(1, env[i], s);
		write(1, "\n", 1);
		i++;
	}
	(void)args;
	(void)line;
}
