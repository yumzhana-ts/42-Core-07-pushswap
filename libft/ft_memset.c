/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:07:17 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/30 12:34:44 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*tmp_str;
	char			tmp_c;
	size_t			i;

	tmp_str = (unsigned char *)str;
	tmp_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		tmp_str[i] = tmp_c;
		i++;
	}
	return (str);
}

/*int main()
{
    char c = 'A';
    char deststring[50] = "A";

    printf("%s\n", deststring);
    ft_memset(deststring, c, 8);
    printf("%s\n", deststring);
}*/