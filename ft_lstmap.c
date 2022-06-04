/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:25:43 by yimazoua          #+#    #+#             */
/*   Updated: 2021/11/07 09:36:55 by yimazoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*rev_lst;

	new_lst = 0;
	rev_lst = new_lst;
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (!new_lst)
		{
			ft_lstclear (&rev_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&rev_lst, new_lst);
		lst = lst->next;
		new_lst = new_lst->next;
	}
	return (rev_lst);
}
