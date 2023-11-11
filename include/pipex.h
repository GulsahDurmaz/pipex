/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:04:29 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/11/07 14:34:06 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft.h"
# include <unistd.h> //fork() pipe() write() close() read() access()
# include <fcntl.h> //open()
# include <sys/wait.h> // waitpid()
# include <errno.h>
# include <string.h>

// utils
void	handle_error(char *info);
void	execute(char *argv, char **envp);

char	*get_path(char *cmd, char **envp);
char	**cmd_with_single_quotes_parser(char *argv);

#endif
