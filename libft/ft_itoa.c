/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:20:11 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 05:02:35 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	int_len(int n)
{
	int	i;
	int	num;

	i = 0;
	num = n;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*zero_case(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (1 + 1));
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		sign;

	count = int_len(n) + (n <= 0);
	sign = 1;
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (0);
	if (n == 0)
		return (zero_case());
	str[count] = '\0';
	while (n != 0)
	{
		str[--count] = (char)((n % 10) * sign + '0');
		n = n / 10;
	}
	count--;
	if (sign < 0)
		str[count] = '-';
	return (str);
}

/*int main()
{
    printf("%s\n", ft_itoa(0));
}*/
