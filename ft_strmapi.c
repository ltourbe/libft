/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:35:48 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/11 16:01:45 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	to_upper(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
*/
