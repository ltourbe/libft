/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:17:41 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/14 17:31:48 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	uppercase(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}
*/
