/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:40:58 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/05 04:47:11 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	rslt;

	rslt = 1;
	while (nb > 0)
	{
	rslt *= nb;
	nb--;
	}
	if (nb < 0)
	{
		return (0);
	}	
	return (rslt);
}
