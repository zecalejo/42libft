/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:13:42 by jnuncio-          #+#    #+#             */
/*   Updated: 2022/10/19 23:14:44 by jnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			printf("nptr = \"%s\"\n", av[i]);
			printf("atoi = %d | ", atoi(av[i]));
			printf("ft_atoi = %d\n\n", ft_atoi(av[i]));
			i++;
		}
	}
	return (0);
}
