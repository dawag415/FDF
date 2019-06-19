/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:10:21 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:10:23 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	ps1;
	unsigned char	ps2;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		ps1 = *(unsigned char*)s1;
		ps2 = *(unsigned char*)s2;
		s1++;
		s2++;
		i++;
		if (ps1 != ps2)
			return (ps1 - ps2);
	}
	return (0);
}
