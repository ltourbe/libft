/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:56:48 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/13 16:07:45 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	s = ft_strlen(dst);
	if (siz == 0)
		return (ft_strlen(src) + siz);
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i + 1 < siz)
	{	
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (siz <= s)
		return (ft_strlen(src) + siz);
	return (ft_strlen(src) + s);
}
