/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:39:16 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 12:46:18 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*p;
	unsigned char		*q;

	p = src;
	q = dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*q = *p;
		q++;
		p++;
	}
	return (dest);
}
