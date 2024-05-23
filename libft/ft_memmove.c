/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 23:00:26 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/30 12:22:09 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			tmp_dest[n - 1] = tmp_src[n - 1];
			n--;
		}
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

/*int main()
{
    char srcstring[12] = "funn";
    char deststring[12] = "fun888";

    printf("%s\n", deststring);
    ft_memmove(deststring,srcstring, sizeof(srcstring));
    printf("%s\n", deststring);

}*/
