/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:43:30 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/12 16:04:11 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_goodsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	total;
	size_t	i;

	total = ft_strlen(s) - start;
	if (total > len)
		total = len;
	sub = malloc((total + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[total] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	return (ft_goodsub(s, start, len));
}
