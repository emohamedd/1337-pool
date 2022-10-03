/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:52:08 by emohamed          #+#    #+#             */
/*   Updated: 2022/03/24 17:46:15 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0 - 1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar (48 + (a / 10));
			ft_putchar (48 + (a % 10));
			ft_putchar (' ');
			ft_putchar (48 + (b / 10));
			ft_putchar (48 + (b % 10));
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}	
}
