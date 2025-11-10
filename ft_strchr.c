/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:28:22 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/05 19:56:32 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char) c && s[i] != '\0')
		i++;
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("%s\n", ft_strchr(av[1], '\0'));
	printf("%s\n", strchr(av[1], '\0'));
}
