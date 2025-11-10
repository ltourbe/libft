/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:56:48 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/10 17:58:15 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	s = ft_strlen(dest);
	if (n == 0 && s >= n)
		return (ft_strlen(src) + n);
	while (dest[i] != '\0' && i < n - 1)
		i++;
	j = 0;
	while (src[j] != '\0' && i < n - 1)
	{	
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (s >= n)
		return (ft_strlen(src) + n);
	return (ft_strlen(src) + s);
}
