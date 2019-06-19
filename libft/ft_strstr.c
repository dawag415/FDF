/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:23:20 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:23:22 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	if (!*little)
		return ((char*)big);
	if (!*big)
		return (0);
	if (*big == *little)
		if (ft_strstr(big + 1, little + 1) - 1 == big)
			return ((char*)big);
	return (ft_strstr(big + 1, little));
}
