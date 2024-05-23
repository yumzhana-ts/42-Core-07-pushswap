/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:30:24 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/30 13:30:31 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		res;

	i = 0;
	res = 0;
	while (src[res])
	{
		res++;
	}
	if (size < 1)
		return (res);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}

/*int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "blablablablablabla";
	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
}*/
