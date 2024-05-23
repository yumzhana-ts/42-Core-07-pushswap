/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:45:54 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 04:47:42 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_libft_list	*ft_lstlast(t_libft_list *lst)
{
	t_libft_list	*node;

	if (lst == NULL)
		return (lst);
	node = lst;
	while (node->next != NULL)
		node = node->next;
	return (node);
}
