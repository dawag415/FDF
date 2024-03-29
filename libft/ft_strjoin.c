/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:19:39 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:19:41 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;

	if (s1 == 0 && s2 == 0)
		return (ft_strnew(0));
	else if (s1 == 0)
		return (ft_strdup(s2));
	else if (s2 == 0)
		return (ft_strdup(s1));
	if (!(tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	ft_memmove(tmp, s1, ft_strlen(s1));
	ft_memmove(&tmp[ft_strlen(s1)], s2, ft_strlen(s2));
	return (tmp);
}
