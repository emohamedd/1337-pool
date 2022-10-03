/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:57:15 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/09 22:52:22 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	m;
	int	*ptr;
	int	i;

	if (min >= max)
		return (0);
	m = max - min;
	ptr = (int *)malloc(sizeof(int) * m);
	if (!ptr)
		return (0);
	i = 0;
	while (i < m)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
