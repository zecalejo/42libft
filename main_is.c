/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:52:31 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/10/16 17:30:54 by jnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;
	int	a;

	printf("Type a number: ");
	scanf("%d", &c);
	a = ft_isalpha(c);
	printf("ft_isalpha() returned (%d) | ", a);
	printf("isalpha() returned (%d)\n", isalpha(c));
	a = ft_isdigit(c);
	printf("ft_isdigit() returned (%d) | ", a);
	printf("isdigit() returned (%d)\n", isdigit(c));
	a = ft_isalnum(c);
	printf("ft_isalnum() returned (%d) | ", a);
	printf("isalnum() returned (%d)\n", isalnum(c));
	a = ft_isascii(c);
	printf("ft_isascii() returned (%d) | ", a);
	printf("isascii() returned (%d)\n", isascii(c));
	a = ft_isprint(c);
	printf("ft_isprint() returned (%d) | ", a);
	printf("isprint() returned (%d)\n", isprint(c));
	return (0);
}
