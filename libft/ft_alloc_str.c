/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 00:18:56 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/20 00:20:31 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_alloc_str(const char *str)
{
	char	*c;

	if (str == NULL)
		return (ft_alloc_str("(null)"));
	c = (char*)malloc(ft_strlen(str) + 1);
	ft_strcpy(c, str);
	return (c);
}
