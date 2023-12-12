#include "shell.h"
/**
 * **parse_input_str - splits string entered by user
 * @buffer: string to be split
 * Return:split string
 */

char **parse_input_str(char *buffer)
{
	char **cmd = NULL;
	char *token, *delimeter = " \n";
	int i;

	cmd = malloc(sizeof(char *) * 1024);
	if (cmd == NULL)
	{
		perror("memory could not be allocated");
		exit(EXIT_FAILURE);
	}
	token = strtok(buffer, delimeter);
	i = 0;
	while (token != NULL)
	{
		cmd[i] = token;
		token = strtok(NULL, delimeter);
		i++;
	}
	cmd[i] = NULL;
	return (cmd);

}
