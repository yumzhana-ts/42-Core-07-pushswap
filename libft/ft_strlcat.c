/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:32:41 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 09:17:13 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		res_d;
	size_t		res_s;

	j = 0;
	if (size == 0 && dst == NULL)
		return (0);
	res_s = ft_strlen(src);
	i = ft_strlen(dst);
	res_d = ft_strlen(dst);
	if (size < 1)
		return (res_s + size);
	while (src[j] && i < (size - 1) && size != 0)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}

/*int				main(void)
{
	char			dest[50] = "sefsfesa";
	char			src[50] = "33";
	unsigned int	size;

	size = 3;
    printf("%zu\n", ft_strlcat(), src, 0);
	printf("dest: %s\nsrc: %s\n", dest, src);
}*/
