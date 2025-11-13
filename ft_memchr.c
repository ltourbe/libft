/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:10:18 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/13 16:31:18 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		if (((const unsigned char *)s)[i] == (unsigned char) c)
			return ((void *)&s[i]);
		n--;
		i++;
	}
	return (NULL);
}
