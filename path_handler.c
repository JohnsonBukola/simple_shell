#include "shell.h"
/**
*search_path - this makes a full path
*@cmd: command to make full path
*Return: complete path
*/
char *search_path(char *cmd)
{
char *path = NULL, *token = NULL, ch = '/';
char *dirs[1024];
int i;
char *cwd = getcwd(NULL, 0);
struct stat sb;
path = getenv("PATH");
token = strtok(path, ":");
if (dirs == NULL)
i = 0;
while (token != NULL)
{
dirs[i] = token;
token = strtok(NULL, ":");
i++;
}
dirs[i] = NULL;
i = 0;
while (dirs[i] != NULL)
{
chdir(dirs[i]);
if (stat(cmd, &sb) == 0)
{
dirs[i] = _str_cat(dirs[i], &ch, 1);
cmd = _strcat(dirs[i], cmd);
break;
}
i++;
}
chdir(cwd);
return (cmd);
}
