/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:29:20 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/14 18:23:19 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*int	main()
{
	char	c;
	c = '#';

	if(ft_isalnum(c) == 1)
		printf("it is a fckn number or fckn alphabet");
	else
		printf("symbol doesnt meet this requirments");
}*/
