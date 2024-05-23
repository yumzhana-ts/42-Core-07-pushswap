/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:41:23 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 05:24:49 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dst;
	size_t		s1_len;
	size_t		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, s1_len + 1);
	ft_strlcat(dst + (s1_len), s2, s2_len + 1);
	return (dst);
}

/*int main()
{
	char* str;

	str = ft_strjoin("Hello","42Prague!");
	printf("%s\n", str);

	return 0;
}*/
