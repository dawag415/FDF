/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:20:58 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:21:00 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char	*ret;
	char	*hold;
	size_t	i;
	size_t	x;

	hold = (char*)src;
	ret = (char*)malloc(sizeof(char) * ft_strlen(dst) + ft_strlen(src) + 1);
	ret = dst;
	i = 0;
	x = 0;
	if (n)
	{
		while (ret[i] != 0)
			i++;
		while (x < n)
		{
			if ((ret[i] = hold[x]) == 0)
				return (ret);
			i++;
			ret[i] = 0;
			x++;
		}
	}
	return (ret);
}
