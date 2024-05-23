/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:57:58 by ytsyrend          #+#    #+#             */
/*   Updated: 2024/01/17 21:05:17 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_libft_list	*ft_lstmap(t_libft_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_libft_list	*savenode;
	t_libft_list	*listnew;
	t_libft_list	*newnode;

	savenode = lst;
	listnew = NULL;
	while (savenode)
	{
		newnode = ft_lstnew(f(savenode->content));
		if (newnode == NULL)
		{
			ft_lstclear(&listnew, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&listnew, newnode);
		savenode = savenode->next;
	}
	newnode = NULL;
	return (listnew);
}
