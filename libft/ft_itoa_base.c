/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 22:58:35 by iwagner           #+#    #+#             */
/*   Updated: 2017/03/20 12:15:10 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int *mult, int base, long nbr)
{
	int len;

	len = 1;
	while (nbr / mult[0] >= base || nbr / mult[0] <= -base)
	{
		mult[0] = mult[0] * base;
		len++;
	}
	len = (nbr < 0) ? len + 1 : len;
	return (len);
}

char		*ft_itoa_base(long nbr, int base)
{
	char	*str;
	int		len;
	int		i;
	char	c;
	int		*mult;

	if (!(mult = (int*)malloc(sizeof(int) * 1)))
		return (0);
	mult[0] = 1;
	len = count(mult, base, nbr);
	if (!(str = ft_strnew(len)))
		return (0);
	str[0] = '-';
	i = (nbr < 0) ? 0 : -1;
	nbr = (nbr < 0) ? -nbr : nbr;
	while (++i < len)
	{
		c = nbr / mult[0];
		str[i] = (0 <= c && c <= 9) ? c + 48 : c + 65;
		nbr = nbr - c * mult[0];
		mult[0] = mult[0] / base;
	}
	str[i] = '\0';
	return (str);
}
