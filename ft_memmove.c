/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:46:43 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 13:09:04 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest;
	const char	*src;

	dest = str1;
	src = str2;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		while (n--)
			*dest++ = *src++;
	else
	{
		dest = str1 + (n - 1);
		src = str2 + (n - 1);
		while (n--)
			*dest-- = *src--;
	}
	return (str1);
}
