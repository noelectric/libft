/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:17:02 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 11:22:12 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if ((argument <= 122 && argument >= 97)
		|| (argument <= 90 && argument >= 65 ))
		return (1);
	else if (argument <= 57 && argument >= 48)
		return (1);
	return (0);
}
