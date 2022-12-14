/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:39:01 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/11/14 23:39:17 by jnuncio-         ###   ########.fr       */
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
		if (i > 0 && s[i] != c && (s[i - 1] == c))
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
