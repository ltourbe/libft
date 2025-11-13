/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:48:58 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/13 14:41:29 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[i] != c)
	{
		count++;
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] == c)
		count--;
	return (count);
}

char	*word_dup(char const *s, char c)
{
	char	*str;
	int		i;
	int		total;

	total = 0;
	while (s[total] != c && s[total] != '\0')
		total++;
	str = malloc((total + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		total;
	char	**split;
	int		i;
	int		j;

	total = count_words(s, c) + 1;
	split = malloc(total * sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			split[j] = word_dup(&s[i], c);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	split[j] = NULL;
	return (split);
}
