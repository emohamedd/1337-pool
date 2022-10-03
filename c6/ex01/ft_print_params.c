/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 08:37:45 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/06 06:40:26 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	l;

	l = 1;
	while (l < ac)
	{
		i = 0;
		while (av[l][i] != '\0')
		{
			ft_putchar(av[l][i]);
			i++;
		}
		ft_putchar('\n');
		l++;
	}
	return (0);
}
