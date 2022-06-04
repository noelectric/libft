/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:08:58 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/07 10:49:56 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*p;
	size_t	size;

	i = 0;
	p = NULL;
	size = len;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *haystack)
	{
		p = (char *)haystack;
		while (haystack[i] == needle[i] && len--)
			if (!needle[++i])
				return (p);
		len = size - 1;
		size = len;
		haystack++;
		i = 0;
	}
	return (NULL);
}
