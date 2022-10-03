/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:46:16 by emohamed          #+#    #+#             */
/*   Updated: 2022/03/29 23:54:30 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	delen;
	unsigned int	selen;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	delen = x;
	selen = ft_strlen(src);
	if (size == 0 || size <= delen)
		return (selen + size);
	while (src [i] != '\0' && i < size - delen - 1)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (delen + selen);
}
