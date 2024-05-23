/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 21:11:35 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/01/16 20:38:05 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main()
{
	char	c;
	c = '0';
	if (ft_isalpha(c) == 1)
		printf("This is alphabetical symbol");
	else
		printf("This is non-alphabetical symbol");
}*/
