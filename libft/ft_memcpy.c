/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:09:07 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/30 12:17:52 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	unsigned char		*tmp_src;
	size_t				i;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

/*int	main()
{
	const char src[50] = "Geeks for Geeks is for programming geeks";
	char dest[50];

	printf("\nBefore memcpy(): %s\n", src);
	printf("Before memcpy(): %s\n", dest);

	ft_memcpy(dest, src, 20);

	printf("\nAfter memcpy(): %s\n", src);
        printf("After memcpy(): %s\n", dest);
}*/
