/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:06:08 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/10/25 02:33:55 by jnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = start;
	if (!s)
		return (NULL);
	while (s[i] && (i - start) < len)
		i++;
	subs = (char *)malloc(sizeof(char) * ((i - start) + 1));
	if (!subs)
		return (NULL);
	if (!len || start > ft_strlen(s))
	{
		*subs = '\0';
		return (subs);
	}
	i = 0;
	while (i < len && s[start + i])
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
