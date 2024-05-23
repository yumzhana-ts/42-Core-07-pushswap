/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:53:18 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 04:55:16 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_libft_list **lst, void (*del)(void *))
{
	t_libft_list	*del_lst;
	t_libft_list	*tmp_lst;

	if (lst == NULL || del == NULL)
		return ;
	tmp_lst = *lst;
	while (tmp_lst)
	{
		del_lst = tmp_lst;
		tmp_lst = tmp_lst->next;
		ft_lstdelone(del_lst, del);
	}
	*lst = 0;
}
