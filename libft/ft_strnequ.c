/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 23:21:48 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 23:21:49 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (n == 0)
		return (1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (n == 1 && *s1 == *s2)
		return (1);
	if (*s1 == *s2 && n)
		return (ft_strnequ(s1 + 1, s2 + 1, n - 1));
	return (0);
}
