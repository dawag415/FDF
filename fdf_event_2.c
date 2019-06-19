/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_event_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 21:40:43 by iwagner           #+#    #+#             */
/*   Updated: 2017/09/28 21:40:46 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		fdf_raise_z(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->wz < 5)
		e->wz += 1;
}

void		fdf_narrow_y(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->sy > 1)
		e->sy -= 1;
}

void		fdf_wide_y(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->sy < 3)
		e->sy += 1;
}

void		fdf_narrow_x(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->sx > 1)
		e->sx -= 1;
}

void		fdf_wide_x(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->sx < 3)
		e->sx += 1;
}
