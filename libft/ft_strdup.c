/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:53:18 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 05:23:51 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*dst;
	size_t		len;

	len = ft_strlen(s1) + 1;
	dst = (char *)malloc(sizeof(char) * len);
	if (dst == NULL)
		return (NULL);
	dst = ft_memcpy(dst, s1, len);
	return (dst);
}
