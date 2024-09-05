/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saincesu <saincesu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:02:26 by saincesu          #+#    #+#             */
/*   Updated: 2024/09/02 15:23:16 by saincesu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 0;
		while (av[ac - 1] != av[i])
		{
			ft_putstr(av[ac - 1]);
			write(1, "\n", 1);
			ac--;
		}
	}
	return (0);
}
