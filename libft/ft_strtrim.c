/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:36:06 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/30 20:38:32 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	dst = (char *)malloc(sizeof(char) * (end - start + 1));
	if (dst == NULL)
		return (0);
	ft_strlcpy(dst, &s1[start], end - start + 1);
	return (dst);
}

/*int main()
{
	printf("%s\n", ft_strtrim("42rague2", "4"));
	return 0;
}*/
