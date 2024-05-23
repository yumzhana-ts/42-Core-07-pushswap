/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:43:41 by ytsyrend          #+#    #+#             */
/*   Updated: 2023/03/31 10:07:19 by ytsyrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = NULL;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_freeall(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

size_t	word_cnt(char const *s1, char c)
{
	size_t	i;
	size_t	word_cnt;
	int		ifword;

	i = 0;
	ifword = 1;
	word_cnt = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			ifword = 1;
		else if (ifword)
			word_cnt++;
		if (s1[i] != c)
			ifword = 0;
		i++;
	}
	return (word_cnt);
}

char	**ft_split(char const *s, int c)
{
	char	**strlist;
	size_t	i;
	size_t	k;
	size_t	save;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	strlist = (char **)malloc(sizeof(char *) * (word_cnt(s, c) + 1));
	if (!strlist)
		return (NULL);
	while (i < word_cnt(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		save = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		strlist[i] = ft_strndup(&s[save], k - save);
		if (strlist[i++] == 0)
			return (ft_freeall(strlist));
	}
	strlist[i] = NULL;
	return (strlist);
}
/*int main (int argc, char *argv[])
{
    int i;
    char c;

    i = 0;
    c = ' ';
    char **my_array = ft_split("Do you believe in love after love",c);
    if (!my_array) 
    {
        printf ("ERROR: Unable to allocate my_array!\n");
        return 1;
    }
    else 
    {
        while(i < word_cnt("Do you believe in love after love", c))
    {
        printf("%s\n",my_array[i]);
        i++;
    }
    }
    return 0;
}*/
