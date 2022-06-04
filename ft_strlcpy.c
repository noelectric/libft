/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:01:55 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 19:03:00 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = 0;
	if (size)
	{
		len = -1;
		while (src[++len] && size-- > 1)
			dst[len] = src[len];
		dst[len] = '\0';
	}
	while (src[len])
		len++;
	return ((size_t)len);
}
