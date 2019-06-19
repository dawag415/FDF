/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:10:05 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:10:08 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*p;

	i = 0;
	d = (unsigned char)c;
	p = (unsigned char*)s;
	while (i < n)
	{
		if (p[i] == d)
			return (&p[i]);
		i++;
	}
	return (0);
}
