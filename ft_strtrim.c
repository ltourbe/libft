/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:57:49 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/13 19:09:15 by ltourbe          ###   ########.fr       */
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

char	*ft_trimtrim(char const *s1, char *trim,
	unsigned int i, unsigned int total)
{
	unsigned int	j;

	j = 0;
	while (j < total - 1)
	{
		trim[j] = s1[i];
		j++;
		i++;
	}
	trim[j] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	i;
	unsigned int	h;
	unsigned int	total;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	h = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && is_set(set, s1[i]) == 1)
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (h > i && is_set(set, s1[h]) == 1)
		h--;
	total = h - i + 2;
	trim = malloc(total * sizeof(char));
	if (trim == NULL)
		return (NULL);
	return (ft_trimtrim(s1, trim, i, total));
}
