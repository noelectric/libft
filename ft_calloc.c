/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:12:52 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 11:16:35 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		c;
	int		x;

	x = 0;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	c = count * size;
	ptr = (char *)malloc(c);
	if (!ptr)
		return (NULL);
	while (c--)
		ptr[x++] = '\0';
	return (ptr);
}
