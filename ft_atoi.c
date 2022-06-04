/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:30:08 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/05 08:44:20 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	r;

	i = 0;
	r = 0;
	sign = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
		if (str[i] == 45 || str[i] == 43)
			return (0);
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (sign * r);
}
