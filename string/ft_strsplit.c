/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:51:49 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/12 22:32:32 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_new(char const *s, char c, size_t i)
{
	size_t		j;
	size_t		k;
	char		*str;

	k = 0;
	str = 0;
	while (s[i])
	{
		if (s[i - 1] == c)
		{
			j = i;
			while (s[i] != c)
				i++;
			if (!(str = (char *)malloc(sizeof(char) * (i - j))))
				return (0);
			while (j < i)
				str[k++] = s[j++];
			str[k] = '\0';
			break ;
		}
		i++;
	}
	return (str);
}

static int		ft_count(char const *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i] && (i + 1) < ft_strlen(s))
	{
		if (s[i] == c)
		{
			while ((s[i] == c) && (i + 1) < ft_strlen(s))
				i++;
			j++;
		}
		i++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (0);
	while (s[i] && i < (ft_strlen(s) - 1))
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (i < (ft_strlen(s) - 1))
			{
				tab[j] = ft_new(s, c, i);
				j++;
			}
		}
		i++;
	}
	tab[j] = (void*)'\0';
	return (tab);
}
