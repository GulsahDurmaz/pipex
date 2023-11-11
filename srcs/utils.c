/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:08:52 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/11/07 15:30:33 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void   handle_error(char *info)
{
    perror(info);
	exit(EXIT_FAILURE);
}
// check for the path
// creates cmds array
// executes the cmds otherwise exits
void    execute(char *argv, char **envp)
{
    char    **cmd;
    char    *path;
    int     i;

	i = 0;
	while (argv[i] != '\'' && argv[i])
		i++;
    cmd = ft_split(argv, ' ');
    path = get_path(cmd[0], envp);
    i = 0;
    if (!path)
    {
        while(cmd[i])
            free(cmd[i++]);
        free(cmd);
        handle_error(argv);
    }
    if (execve(path, cmd, envp) == -1)
        handle_error("Command not executed");
}

// Finds the full path of a command by parsing and checking directories 
// provided by PATH environment variable. If command is found within 
// directories, returns the path, otherwise returns NULL.
char	*get_path(char *cmd, char **envp)
{
	char	**dir_paths;
	char	*path;
	char	*path_except_cmd;
	int		i;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	dir_paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (dir_paths[i])
	{
		path_except_cmd = ft_strjoin(dir_paths[i], "/");
		path = ft_strjoin(path_except_cmd, cmd);
		free(path_except_cmd);
		if (access(path, X_OK) == 0)
			return (path);
		free(path);
		i++;
	}
	i = 0;
	while (dir_paths[i])
		free(dir_paths[i++]);
	free(dir_paths);
	return (NULL);
}