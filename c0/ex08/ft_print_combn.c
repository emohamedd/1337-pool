/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:29:35 by emohamed          #+#    #+#             */
/*   Updated: 2022/03/26 21:41:30 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	work(int n, int pos, int arr[])
{
	if (
		((arr[n - 1] == 9) & (arr[0] == (9 - n) + 1)))
	{
	}
	else
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	dowhile(int n, int pos, int arr[])
{
	int	posinarray;

	posinarray = 0;
	while (arr[pos] < 10)
	{
		if (pos < n - 1)
		{
			arr[pos + 1] = arr[pos] + 1;
		}
		if (pos == n - 1)
		{
			posinarray = 0;
			while (posinarray < n)
			{
				ft_putnbr(arr[posinarray]);
				posinarray++;
			}
			work(n, pos, arr);
		}
		else
		{
			dowhile(n, pos + 1, arr);
		}
		arr[pos]++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];

	arr[0] = 0;
	dowhile(n, 0, arr);
}
