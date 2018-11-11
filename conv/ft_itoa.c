/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:54:25 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/11 18:10:57 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(int n, int i, int j)
{
	if (n > i)
		return (ft_size(n, i*10, j + 1));
	return (j);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		neg;
	char	*str;

	neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	len = ft_size(n, 1, 1);
	if (!(str = (char *)malloc(sizeof(char) * (len + neg))))
		return (0);
	if (neg != 0)
		str[0] = '-';
	i = len - 2 + neg;
	while (n > 0 && i > (neg - 1))
	{
		str[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	str[len - (1 - neg)] = '\0';
	return (str);
}
