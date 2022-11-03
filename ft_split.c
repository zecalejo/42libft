/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:39:01 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/11/03 00:10:03 by jnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wrdcnt(char const *str, char c)
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

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	wcnt;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((ft_wrdcnt(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = -1;
	j = 0;
	wcnt = -1;
	while (s[++i])
	{
		if (s[i] != c && s[i - 1] == c)
			j = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0') && i > 0)
		{
			ptr[++wcnt] = ft_substr(s, j, i + 1 - j);
			ptr[wcnt][i + 1 - j] = '\0';
		}
	}
	ptr[wcnt + 1] = NULL;
	return (ptr);
}

// int	main(void)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	**ptr;
// 	// char const	s[] = "                  olol";
// 	// char const	s[] = "Jose Calejo Pires";
// 	char const	s[] = "      split       this for   me  !       ";

// 	i = -1;
// 	j = ft_wrdcnt(s, ' ');
// 	ptr = ft_split(s, ' ');
// 	printf("\nwcnt = %ld\n\n", j);
// 	while (++i < j)
// 		printf("\"%s\"\n", ptr[i]);
// 	printf("%p\n", ptr[j]);
// 	free(ptr);
// 	return (0);
// }
