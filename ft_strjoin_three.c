/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksharee <ksharee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:35:07 by ksharee           #+#    #+#             */
/*   Updated: 2021/02/15 17:36:16 by ksharee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_strjoin_three(char const *s1, char const *s2, char const *s3)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	if (s1 == NULL || s2 == NULL || s3 == NULL)
		return (NULL);
	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3);
	if (!(ptr = (char *)malloc(size + 1)))
		return (NULL);
	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	while (*s3 != '\0')
	{
		ptr[i] = *s3;
		i++;
		s3++;
	}
	ptr[i] = '\0';
	return (ptr);
}
