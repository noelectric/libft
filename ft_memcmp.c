/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:34:50 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 12:38:55 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	if (n != 0)
	{
		while (n--)
			if (*p1++ != *p2++)
				return ((unsigned char)*--p1 - (unsigned char)*--p2);
	}
	return (0);
}
