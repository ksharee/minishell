/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goodluck <goodluck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 23:46:01 by goodluck          #+#    #+#             */
/*   Updated: 2021/02/14 00:15:32 by goodluck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_split(char **split)
{
	int size;
	int i;

	size = 0;
	i = -1;
	while (split[++i])
		size++;
	while(size)
	{
		free(split[i]);
		i--;
		size--;
	}
	free(split);
}
