/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:09:47 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:09:51 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*tdst;
	const char	*fsrc;

	tdst = (char*)dst;
	fsrc = (char*)src;
	if (n)
	{
		while (n > 0)
		{
			if ((*tdst++ = *fsrc++) == c)
				return ((char*)tdst);
			n--;
		}
	}
	return (0);
}
