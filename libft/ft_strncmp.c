/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:31:08 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 05:26:56 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;
	size_t			i;

	i = 0;
	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	if (len == 0)
		return (0);
	while (i < len && (s1_tmp[i] || s2_tmp[i]))
	{
		if (s1_tmp[i] != s2_tmp[i])
			return (s1_tmp[i] - s2_tmp[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    char deststring[50] = "t";
    char srcstring[50] = "TutorialsPoint";
    int h;

    h = ft_strncmp(srcstring, deststring, 2);
    printf("%d\n", h);
}*/
