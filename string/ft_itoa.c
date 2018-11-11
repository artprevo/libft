/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:54:25 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/11 16:05:06 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(int n, int i, int j)
{
	if (n > i)
		return (ft_size(n, i*10, j + 1));
	return (j);
}

/*char	*ft_itoa(int n)
{
	int i;
	int len;
	int neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = -1;
	}
	len = ft_size(n, 1, 1);
}
*/

int		main()
{
	int i;

	i = ft_size(45632, 1, 1);
	printf("%d\n", i);
	return (0);
}
