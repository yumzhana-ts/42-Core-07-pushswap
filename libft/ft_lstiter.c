/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:56:29 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 04:57:44 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_libft_list *lst, void (*f)(void *))
{
	t_libft_list	*node;

	node = lst;
	while (node != NULL)
	{
		f(node->content);
		node = node -> next;
	}
}
