/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:48:33 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/06 06:50:20 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	b;

	i = ac - 1;
	while (i > 0)
	{
		b = 0;
		while (av[i][b] != '\0' && ac)
		{
			ft_putchar(av[i][b]);
			b++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
