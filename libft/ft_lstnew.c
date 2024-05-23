/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 04:33:51 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 05:12:26 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_libft_list	*ft_lstnew(void *content)
{
	t_libft_list	*ret;

	ret = (t_libft_list *)malloc(sizeof(t_libft_list));
	if (ret == 0)
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	return (ret);
}
