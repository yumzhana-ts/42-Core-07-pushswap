/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:00:21 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/01/21 19:31:44 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main()
{
	char s[50] = "Geeks for Geeks is for programming geeks";
	printf("\nBefore bzero(): %s\n", s);

	ft_bzero(s, 3);
	printf("After bzero(): %s", s);
	return 0;
}*/
