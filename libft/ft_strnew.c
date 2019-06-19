/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:22:06 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/20 12:09:10 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*tmp;
	size_t		i;

	i = 0;
	if (!(tmp = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
