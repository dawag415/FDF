/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:17:17 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:17:19 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	i = 0;
	while (*s != c)
	{
		if (*s == 0)
			return (0);
		++s;
	}
	p = (char*)s;
	return (p);
}