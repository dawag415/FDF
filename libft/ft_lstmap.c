/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:01:48 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:01:54 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*tmp;

	if (lst)
	{
		tmp = f(lst);
		ret = tmp;
		if (!(ret))
			return (0);
		while (lst->next)
		{
			lst = lst->next;
			tmp->next = f(lst);
			if (!(tmp->next))
				return (0);
			tmp = tmp->next;
		}
		return (ret);
	}
	else
		return (0);
}
