/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_struct_init2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 20:23:50 by iwagner           #+#    #+#             */
/*   Updated: 2017/09/23 20:23:59 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_cust.h"
#include "libft.h"

t_col			*mlx_init_col(char r, char g, char b, char t)
{
	t_col		*col;

	if (!(col = malloc(sizeof(*col))))
		return (0);
	col->tab[0] = b;
	col->tab[1] = g;
	col->tab[2] = r;
	col->tab[3] = t;
	return (col);
}
