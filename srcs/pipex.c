/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:50:42 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/11/11 14:34:22 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

// Child process reads data from infile as stdin for cmd1.
// redirects the infile(argv[1]) to STDIN
// redirects the end[1] to STDOUT
// executes the cmd1 (argv[2])
void	child_process(char **argv, char **envp, int *end)
{
	int	infile;

	infile = open(argv[1], O_RDONLY, 0777);
	if (infile == -1)
		handle_error(argv[1]);
	close(end[0]);
	dup2(infile, STDIN_FILENO);
	dup2(end[1], STDOUT_FILENO);
	close(infile);
	close(end[1]);
	execute(argv[2], envp);
}

// redirects the end[0] to STDIN
// redirects the outfile to STDOUT
// executes the cmd2 (argv[3])
void	parent_process(char **argv, char **envp, int *end)
{
	int	outfile;

	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (outfile == -1)
		handle_error(argv[4]);
	close(end[1]);
	dup2(end[0], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	close(outfile);
	close(end[0]);
	execute(argv[3], envp);
}

	// end[1] -> child process -> cmd1 executed by child.
	// end[0] -> parent process -> cmd2 executed by parent.
int	main(int argc, char **argv, char **envp)
{
	int		end[2];
	pid_t	pid;

	if (argc == 5)
	{
		if (pipe(end) == -1)
			handle_error("pipe error");
		pid = fork();
		if (pid == -1)
			handle_error("fork error");
		if (pid == 0)
			child_process(argv, envp, end);
		waitpid(pid, NULL, 0);
		parent_process(argv, envp, end);
	}
	else
		handle_error("Correct arguments: ./pipex infile cmd1 cmd2 outfile");
	return (0);
}
