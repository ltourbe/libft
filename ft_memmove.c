/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:24:11 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/10 18:29:59 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	while (i > 0)
	{
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		i--;
	}
	((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
	return (dst);
}
