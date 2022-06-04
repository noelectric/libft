/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:18:27 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 19:20:24 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar )
{
	int	len;

	len = 0;
	while (string[len])
		len++;
	if ((unsigned char)searchedChar == '\0')
		return ((char *)(string + len));
	while (len >= 0)
		if (string[--len] == (unsigned char)searchedChar)
			return ((char *)(string + len));
	return (NULL);
}
