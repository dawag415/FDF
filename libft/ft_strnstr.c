/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:22:20 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:22:22 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!*little)
		return ((char*)big);
	if (!*big || len == 0)
		return (0);
	if (*big == *little)
		if (ft_strnstr(big + 1, little + 1, len - 1) - 1 == big)
			return ((char*)big);
	return (ft_strnstr(big + 1, little, len - 1));
}
