/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:47:01 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/11/02 17:48:47 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

// Child process that duplicates read end of the pipe to STDIN fd, redirecting
// input of the child process to make sure it is received from infile(argv[1]).
// It also duplicates the write end of the pipe to STDOUT fd, redirecting
// any output to STDOUT making it available for parent process.
// Then executes the command(argv[2]).

// Child process takes data from infile as stdin for cmd1.
// Arguman olarak yazilan ilk girdiyi okur
void	child_process(char **argv, char **envp, int *end)
{
	int	infile;

	// int open(const char *pathname, int flags, mode_t mode);
	infile = open(argv[1], O_RDONLY, 0777);
	if (infile == -1)
		error_exit();
	close(end[0]); // we don't need it for this process.
	// int dup2(int oldfd, int newfd);
	dup2(infile, STDIN_FILENO);
	dup2(end[1], STDOUT_FILENO);
	close(end[1]);
	execute(argv[2], envp);
}

// Parent process that duplicates the read end of the pipe to STDIN fd,
// redirecting any input from STDIN to make sure it is taken from the
// read end of the pipe which is written by the child process.
// It also duplicates fd of the outfile(argv[4]) to STDOUT fd, redirecting
// output of the parent process to make sure it is written to the output file.
// Then executes the command(argv[3]).
void	parent_process(char **argv, char **envp, int *end)
{
	int	outfile;

	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (outfile == -1)
		error_exit();
	close(end[1]); // we don't need it for this process.
	dup2(end[0], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	close(end[0]);
	execute(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		end[2];
	// end[1] -> child process -> cmd1 executed by child.
	// end[0] -> parent process -> cmd2 executed by parent.
	pid_t	pid;

	if (argc == 5)
	{
		if (pipe(end) == -1)
			error_exit();
		pid = fork();
		if (pid == -1)
			error_exit();
		if (pid == 0)
			child_process(argv, envp, end); // end[1] -> child process, writes.
		waitpid(pid, NULL, 0); // for child process finishes
		parent_process(argv, envp, end); // end[0] -> parent process, reads.
	}
	else
	{
		ft_putstr_fd("Error: Invalid arguments\n", 2);
		ft_putstr_fd("Correct arguments: ./pipex file1 cmd1 cmd2 file2\n", 1);
	}
	return (0);
}
