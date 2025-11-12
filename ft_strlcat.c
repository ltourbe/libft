/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:56:48 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/12 14:35:59 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	s = ft_strlen(dest);
	if (siz == 0)
		return (ft_strlen(src) + siz);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i + 1 < siz)
	{	
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (siz <= s)
		return (ft_strlen(src) + siz);
	return (ft_strlen(src) + s);
}
