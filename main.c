/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharee <ksharee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:27:47 by goodluck          #+#    #+#             */
/*   Updated: 2021/02/15 17:44:31 by ksharee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minishell.h"

int		main(int agrc, char **agrv, char **envp)
{
	t_param all;
	(void)agrc;
	(void)agrv;
	int i = 0;
	char **array;

	all.line = ft_split("cd;..", ';');
	all.env_new = env_copy(envp, &all);
	env_to_array(&all);
	// while (array[i])
	// {
	// 	printf("%s\n", array[i]);
	// 	i++;
	// }

	//exec_run(&all);
	//echo_run(&all);
	//pwd_run(&all);
	//cd_run(&all);
	//pwd_run(&all);
	//env_run(&all);
	//while (1) ;
}
