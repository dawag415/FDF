/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:21:13 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:21:16 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	if (!n)
		return (0);
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (ps1[i] == ps2[i])
	{
		if (ps1[i] == 0 || n == 1)
			return (0);
		n--;
		i++;
	}
	if (ps2[i] != ps1[i])
		return (ps1[i] - ps2[i]);
	return (0);
}
