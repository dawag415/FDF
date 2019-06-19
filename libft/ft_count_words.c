/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 22:55:32 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/19 22:55:37 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s, char c)
{
	int split;
	int split_t;

	split_t = 0;
	split = 0;
	while (*s)
	{
		if (split_t == 1 && *s == c)
			split_t = 0;
		if (split_t == 0 && *s != c)
		{
			split_t = 1;
			split++;
		}
		s++;
	}
	return (split);
}
