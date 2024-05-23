/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:33:25 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/30 13:33:31 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
    char deststring[12] = "funnystr";
    int len;

    len = ft_strlen(deststring);
    printf("%s\n", deststring);
    printf("%d\n", len);
}*/
