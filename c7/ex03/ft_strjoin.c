/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:09:32 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/09 19:41:58 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str != 0 && str[i] != '\0')
		i++;
	return (i);
}

int	m_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src != 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	return (i);
}

char	*empty_str(void)
{
	char	*ret;

	ret = malloc(1);
	*ret = 0;
	return (ret);
}

int	calc_total_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		++i;
	}
	len += ((size - 1) * ft_strlen(sep)) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		cur;
	char	*ret;

	if (size == 0 || strs == 0 || *strs == 0)
		return (empty_str());
	ret = malloc(calc_total_len(size, strs, sep));
	i = 0;
	cur = 0;
	while (i < size)
	{
		if (strs[i] != 0)
		{
			cur += m_strcpy(&ret[cur], strs[i]);
			if (i + 1 < size && strs[i + 1] != 0)
				cur += m_strcpy(&ret[cur], sep);
		}
		++i;
	}
	ret[cur] = '\0';
	return (ret);
}
