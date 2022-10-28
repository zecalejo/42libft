/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:39:01 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/10/28 03:27:25 by jnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wrdcnt(char const *str, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

/* char	*ft_chrtrim(char const *s1, char set)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	if (s1[i])
	{
		while (s1[i] == set)
			i++;
		while (s1[len - 1] == set && len > i)
			len--;
		str = (char *)malloc(len - i + 1);
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[i], len - i + 1);
	}
	return (str);
}
*/
size_t	ft_strri(const char *s, char c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == c)
			return (i);
		i--;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	wcnt;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	wcnt = ft_wrdcnt(s, c);
	ptr = (char **)malloc(sizeof(char *) * (wcnt + 1));
	if (!ptr)
		return (NULL);
	ptr[wcnt] = NULL;
	i = ft_strlen(s);
	printf("%ld\n", i);
	while (i)
	{
		i--;
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			wcnt--;
			s = ft_substr(s, 0, i + 1);
			((char *)s)[i] = '\0';
			j = ft_strri(s, c);
			printf("%ld\n", j);
			ptr[wcnt] = ft_substr(s, j + 1, i - j);
			ptr[wcnt][i - j] = '\0';
		}
	}
	return (ptr);
}

int	main(void)
{
	char const	s[] = "      split       this for   me  !       ";
	char		**ptr;

	ptr = ft_split(s, ' ');
	printf("%ld\n\n", ft_wrdcnt(s, ' '));
	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);
	printf("%s\n", ptr[3]);
	printf("%s\n", ptr[4]);
	printf("%p\n", ptr[5]);
	free(ptr);
	return (0);
}
