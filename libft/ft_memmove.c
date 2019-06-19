/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:11:18 by iwagner           #+#    #+#             */
/*   Updated: 2017/09/28 15:49:56 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ret;
	unsigned char	*hold;

	if (hold < ret)
	{
		ret = ret + len - 1;
		hold = hold + len - 1;
		while (len-- > 0)
		{
			*ret-- = *hold--;
		}
	}
	else if (ret < hold)
	{
		while (len > 0)
		{
			*ret++ = *hold++;
			len--;
		}
	}
	else
		return (hold);
	return (dst);
}
