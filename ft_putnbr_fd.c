/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:22:57 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/11 17:43:47 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	filou;
	long int	res;

	filou = n;
	if (filou < 0)
	{
		filou = -filou;
		write(1, "-", 1);
	}
	if (filou < 10)
	{
		res = filou + '0';
		write(fd, &res, 1);
	}
	else
	{
		ft_putnbr_fd(filou / 10, fd);
		ft_putnbr_fd(filou % 10, fd);
	}
}
