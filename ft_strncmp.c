/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:40:32 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/12 11:07:34 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	printf("n = %zu\n", n);
	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i <= n - 1)
	{
		printf("n = %zu\n", n);
		printf("i = %zu\n", i);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
