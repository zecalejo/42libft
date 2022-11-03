/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:19:34 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/11/03 18:12:05 by jnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

// int	main(int ac, char **av)
// {
// 	int	fd;
// 	int	i;

// 	fd = open ("test.txt", O_RDWR);
// 	i = 0;
// 	printf("fd = %d\n", fd);
// 	if (ac > 1)
// 	{
// 		while (++i < ac)
// 			ft_putchar_fd(av[i][0], fd);
// 	}
// 	return (0);
// }
