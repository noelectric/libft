/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:21:19 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 19:22:24 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len1;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len1 = ft_strlen(s1);
	while (len1 && ft_strchr(set, s1[len1 - 1]))
		len1--;
	ptr = (char *)malloc(sizeof(char) * (len1 + 1));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, len1);
	ptr[len1] = '\0';
	return (ptr);
}
