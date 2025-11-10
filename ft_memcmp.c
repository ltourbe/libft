/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:14:03 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/10 18:29:27 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((const char *) s1)[i] == ((const char *) s2)[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (((const char *) s1)[i] - ((const char *) s2)[i]);
}
