/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:08:59 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:09:02 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ret;

	if (!(ret = (void*)malloc(sizeof(char) * (size + 1))) || size >= 2147483647)
		return (0);
	ft_bzero(ret, size);
	return (ret);
}
