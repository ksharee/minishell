/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharee <ksharee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 23:07:19 by goodluck          #+#    #+#             */
/*   Updated: 2021/02/15 17:36:24 by ksharee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MINISHELL_H
#define MINISHELL_H
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <signal.h>

typedef struct s_envcopy
{
	char				*key;
	char				equ;
	char				*value;
	struct s_envcopy	*next;
}				t_envcopy;


typedef struct s_param
{
	char **line;
	t_envcopy *env_new;
}				t_param;

t_envcopy	*env_copy(char **envp, t_param *all);
void	exec_run(t_param *all);
void	free_split(char **split);
void	echo_run(t_param *all);
void	pwd_run(t_param *all);
char	*ft_strjoin_three(char const *s1, char const *s2, char const *s3);
void	cd_run(t_param *all);
void	error(char *error);
char	*ft_realloc(char *ptr, size_t newsize);
char	**env_to_array(t_param *all);

#endif
