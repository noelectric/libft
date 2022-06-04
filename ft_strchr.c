/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:20:27 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 13:23:08 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	while (*string)
		if (*string++ == (unsigned char)searchedChar)
			return ((char *)--string);
	if (searchedChar == '\0')
		return ((char *)string);
	return (NULL);
}
