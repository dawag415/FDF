/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:11:37 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:11:39 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;
	char			*pb;

	a = (unsigned char)c;
	i = 0;
	pb = (char*)b;
	while (i < len)
		pb[i++] = a;
	b = (void*)pb;
	return (b);
}
