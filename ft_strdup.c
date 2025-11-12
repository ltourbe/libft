/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:27:45 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/12 15:13:36 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t		i;
	size_t		len;

	len = ft_strlen(s) + 1;
	s2 = malloc(len * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
