/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:34:29 by emohamed          #+#    #+#             */
/*   Updated: 2022/03/27 22:50:42 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
			j = 0;
		while (j < size - i -1)
		{
			if (tab[j] > tab[j + 1])
			{
					temp = tab[j + 1];
					tab[j + 1] = tab[j];
					tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}		
