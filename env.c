/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharee <ksharee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 23:10:32 by goodluck          #+#    #+#             */
/*   Updated: 2021/02/15 17:46:06 by ksharee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		env_size(t_envcopy *lst)
{
	int	i;

	i = 0;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

char	**env_to_array(t_param *all)
{
	t_envcopy	*tmp;
	char		*tmp_str;
	char		**env_array;
	int			i;

	tmp = all->env_new;
	i = -1;
	env_array = (char **)malloc(sizeof(char) * env_size(all->env_new));
	while (tmp)
	{
		printf("%s=%s\n", tmp->key, tmp->value);
		// tmp_str = ft_strjoin_three(tmp->key, "=", tmp->value);
		// env_array[++i] = ft_strdup(tmp_str);
		// free(tmp_str);
		tmp = tmp->next;
	}
	env_array[i] = NULL;
	return (env_array);
}

void	env_add_back(t_envcopy **head, t_envcopy *new)
{
	t_envcopy	*tmp;

	tmp = *head;
	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

t_envcopy	*env_new(char *key, char *value, char equ)
{
	t_envcopy	*elem;

	if (!(elem = malloc(sizeof(t_envcopy))))
		return (NULL);
	elem->key = key;
	elem->value = value;
	elem->equ = equ;
	elem->next = NULL;
	return (elem);
}

t_envcopy	*env_copy(char **envp, t_param *all)
{
	t_envcopy	*head;
	int			i;
	char		**env_array;

	head = NULL;
	i = -1;
	while (envp[++i])
	{
		env_array = ft_split(envp[i], '=');
		env_add_back(&head, env_new(env_array[0], env_array[1], '='));
		free_split(env_array);
	}
	return (head);
}
