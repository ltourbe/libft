/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:02:46 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/11 15:04:25 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intlen(int n)
{
	int			count;
	long int	filou;

	filou = n;
	count = 1;
	if (filou < 0)
		filou = -filou;
	while (filou >= 10)
	{
		filou = filou / 10;
		count++;
	}
	return (count);
}

char	*ft_nbr(char *str, int i, int total, int n)
{
	long int	filou;

	filou = n;
	if (filou < 0)
	{
		str[0] = '-';
		filou = -filou;
		while (i > 0)
		{
			str[i] = filou % 10 + '0';
			filou = filou / 10;
			i--;
		}
		str[total - 1] = '\0';
		return (str);
	}
	while (i >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[total - 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		total;

	total = ft_intlen(n) + 1;
	if (n < 0)
		total++;
	str = malloc(total * sizeof(char));
	if (str == NULL)
		return (NULL);
	return (ft_nbr(str, total - 2, total, n));
}
