/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharee <ksharee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 23:07:01 by goodluck          #+#    #+#             */
/*   Updated: 2021/02/15 17:20:30 by ksharee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// void	exec_env_path(t_param *all)
// {
// 	char **path_array;
// 	int i;

// 	i = -1;
// 	errno = 0;
// 	while (all->env_copy[++i])
// 	{
// 		if (!ft_strncmp(all->env_copy[i], "PATH=", 5))
// 		{
// 			all->line[0] = ft_strjoin("/", all->line[0]);
// 			path_array = ft_split(ft_substr(all->env_copy[i], 5, ft_strlen(all->env_copy[i]) - 5), ':');
// 			i = -1;
// 			while (path_array[++i])
// 				execve(ft_strjoin(path_array[i], all->line[0]), all->line, all->env_copy);
// 			error(strerror(errno));
// 		}
// 	}
// 	free_split(path_array);
// }

// void	exec_absolut_path(t_param *all)
// {
// 	errno = 0;
// 	if (execve(all->line[0], all->line, all->env_copy) == -1)
// 	{
// 		error(strerror(errno));
// 		kill(getpid(), SIGKILL);
// 	}
// }

// void	exec_run(t_param *all)
// {
// 	pid_t	pid;

// 	pid = fork();
// 	if (pid == 0)
// 	{
// 		if (all->line[0][0] == '.' || all->line[0][0] == '/')
// 			exec_absolut_path(all);
// 		else
// 			exec_env_path(all);
// 	}
// 	else
// 		wait(&pid);
// }
