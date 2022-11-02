/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:39:01 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/10/31 02:51:05 by jnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static size_t	ft_wrdcnt(char const *str, char c)
// {
// 	size_t	i;
// 	size_t	cnt;

// 	i = 0;
// 	cnt = 0;
// 	while (str[i])
// 	{
// 		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
// 			cnt++;
// 		i++;
// 	}
// 	return (cnt);
// }
// /* 
// static char	*ft_chrtrim(char const *s1, char set)
// {
// 	char	*str;
// 	size_t	i;
// 	size_t	len;

// 	i = 0;
// 	len = ft_strlen(s1);
// 	str = NULL;
// 	if (!s1)
// 		return (NULL);
// 	while (s1[i] == set)
// 		i++;
// 	while (s1[len - 1] == set && len > i)
// 		len--;
// 	str = (char *)malloc(len - i + 1);
// 	if (!str)
// 		return (NULL);
// 	ft_strlcpy(str, &s1[i], len - i + 1);
// 	printf("trim = \"%s\"\n", str);
// 	return (str);
// } */

// char	**ft_split(char const *s, char c)
// {
// 	char	**ptr;
// 	size_t	wcnt;
// 	size_t	i;
// 	size_t	j;

// 	printf("\"%s\"\n", s);
// 	printf("\"%s\"\n", ft_substr(s, 33, 34 - 33));
// 	if (!s)
// 		return (NULL);
// 	ptr = (char **)malloc((ft_wrdcnt(s, c) + 1) * sizeof(char *));
// 	i = -1;
// 	j = 0;
// 	wcnt = 0;
// 	while (s[++i])
// 	{
// 		if (s[i] != c && s[i - 1] == c)
// 			j = i;
// 		if ((s[i] == c || s[i] == '\0') && s[i - 1] != c && i > 0)
// 		{
// 			printf("--%ld/%ld", i, j);
// 			ptr[wcnt] = ft_substr(s, j, i - j);
// 			ptr[wcnt++][i - j] = '\0';
// 		}
// 	}
// 	ptr[wcnt - 1] = NULL;
// 	return (ptr);
// }

// int	main(void)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	**ptr;
	
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
