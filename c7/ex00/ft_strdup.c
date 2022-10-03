/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:38:34 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/09 18:21:36 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *str)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(str));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}	
	cpy[i] = '\0';
	return (cpy);
}
