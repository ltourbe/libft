/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:10:18 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/14 12:25:32 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	uc = (unsigned char)c;
	p = (const unsigned char *)s;
	while (n > 0)
	{
		if (*p == uc)
			return ((void *)p);
		n--;
		p++;
	}
	return (NULL);
}
