/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:01:31 by emohamed          #+#    #+#             */
/*   Updated: 2022/04/14 17:07:03 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset != NULL && charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	cnt_wrds(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str != NULL && str[i] != '\0')
	{
		while (str[i] != '\0' && is_space(charset, str[i]))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_space(charset, str[i]))
			i++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !is_space(charset, str[i]))
		i++;
	return (i);
}

char	*ft_select_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = word_len(str, charset);
	word = (char *)malloc((len + 1) * sizeof(char));
	word[len] = '\0';
	while (str[i] != '\0' && !is_space(charset, str[i]))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;

	i = 0;
	tab = (char **)malloc((cnt_wrds(str, charset) + 1) * sizeof(char *));
	while (str != NULL && *str != '\0')
	{
		while (*str != '\0' && is_space(charset, *str))
			str++;
		if (*str != '\0')
		{
			tab[i] = ft_select_word(str, charset);
			i++;
		}
		while (*str != '\0' && !is_space(charset, *str))
			str++;
	}
	tab[i] = 0;
	return (tab);
}
