/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artprevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:55:23 by artprevo          #+#    #+#             */
/*   Updated: 2018/11/09 19:12:22 by artprevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dst[i])
		i++;
	printf("is ok\ni = %u\n", i);
	j = 0;
	while (src[j] && j < size)
	{
		dst[i + j] = src[j];
		printf("%c\n", dst[i + j]);
		j++;
	}
	printf("is ok\n");
	dst[i + j] = '\0';
	k = 0;
	while (src[k])
		k++;
	printf("k = %d\nsize = %zu\n", k, size);
	return (k + size);
}

int	main()
{
	printf("%zu\n", ft_strlcat("salut    ", "salut", 42));
	return (0);
}
