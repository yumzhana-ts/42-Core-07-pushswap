/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:08:44 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/15 14:51:54 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tmp_c;
	unsigned char	*tmp_s;
	size_t			i;

	tmp_c = (unsigned char)c;
	tmp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == tmp_c)
			return (&tmp_s[i]);
		i++;
	}
	return (0);
}

/*int main () 
{
   char str[] = "ld.lslsl";
   char ch = 'u';
   char *la;
   char *lala;

   la = memchr(str, ch, 8);
   lala = ft_memchr(str, ch, 8);

   printf("String after |%c| is - |%s|\n", ch, la);
   printf("String after |%c| is - |%s|\n", ch, lala);


   return(0);
}*/
