/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:34:15 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/07 10:05:35 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_blocks(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (!str[i] || str[0] == c)
		j = 0;
	while (str[i])
		if (str[i++] == c && str[i] != c && str[i])
			j++;
	return (j);
}

static char	*free_memory(char **p, int blocks)
{
	while (blocks--)
		free(p[blocks]);
	return (NULL);
}

static char	**calc_size_copy(char **hub, char *str, char c, int block)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (*str)
	{
		while (str[i] && str[i] != c)
			i++;
		if (i != 0 && (l < block))
		{
			hub[l] = (char *)malloc((i + 1) * sizeof(char));
			if (hub[l] == NULL)
				free_memory(hub, block);
			ft_memcpy (hub[l], str, i);
			hub[l][i] = '\0';
			l++;
			str = str + i;
			i = 0;
		}
		else
			str += 1;
	}
	hub[l] = NULL;
	return (hub);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**hub;

	j = 0;
	hub = NULL;
	if (!s)
		return (NULL);
	j = ft_blocks (s, c);
	hub = (char **)malloc((j + 1) * sizeof(char *));
	if (hub == NULL)
		return (NULL);
	calc_size_copy(hub, (char *)s, c, j);
	return (hub);
}
