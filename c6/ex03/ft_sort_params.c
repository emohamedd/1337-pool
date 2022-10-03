/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:42:15 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/06 06:43:21 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*amn;

	amn = *a;
	*a = *b;
	*b = amn;
}

int	main(int argc, char **argv)
{
	int		fst;
	int		scd;

	scd = 1;
	while (scd < argc - 1)
	{
		fst = 1;
		while (fst < argc - 1)
		{
			if (ft_strcmp(argv[fst], argv[fst + 1]) > 0)
			{
				ft_swap(&argv[fst], &argv[fst + 1]);
			}
			fst++;
		}
		scd++;
	}
	fst = 1;
	while (fst < argc)
	{
		ft_putstr(argv[fst]);
		ft_putchar('\n');
		fst++;
	}
	return (0);
}
