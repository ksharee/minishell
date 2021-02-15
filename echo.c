/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharee <ksharee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 16:50:33 by goodluck          #+#    #+#             */
/*   Updated: 2021/02/15 10:49:53 by ksharee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	echo_run(t_param *all)
{
	int i;

	i = 0;
	ft_strncmp(all->line[1], "-n", 2) == 0 ? i++ : 0;
	while (all->line[++i])
	{
		ft_putstr_fd(all->line[i], 1);
		!all->line[i + 1] ? 0 : write(1, " ", 1);
	}
	ft_strncmp(all->line[1], "-n", 2) == 0 ? 0 : write(1, "\n", 1);
}
