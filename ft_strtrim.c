/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:57:49 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/10 20:27:53 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_size(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	int				size;

	size = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				size++;
			j++;
		}
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	total = ft_strlen(s1) - ft_size(s1, set) + 1;
	trim = malloc(total * sizeof(char));
	if (trim == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (is_set(set, s1[i]) == 1)
			i++;
		else
		{	
			trim[j] = s1[i];
			j++;
			i++;
		}
	}
	trim[j] = '\0';
	return (trim);
}
