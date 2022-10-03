/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:21:40 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/05 04:51:18 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
	res *= nb * ft_recursive_factorial(nb - 1);
	nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
