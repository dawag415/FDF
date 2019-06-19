/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_event_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 21:40:32 by iwagner           #+#    #+#             */
/*   Updated: 2017/09/28 21:40:37 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		fdf_zoom_out(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->zoom < 70)
		e->zoom += 5;
}

void		fdf_zoom_in(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->zoom > 10)
		e->zoom -= 5;
}

void		fdf_warp_x(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->wx == 0)
		e->wx = 1;
	else
		e->wx = 0;
}

void		fdf_lower_z(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->wz > -5)
		e->wz -= 1;
}

void		fdf_warp_y(t_env *e)
{
	ft_bzero(e->image->data, WW_WIDTH_H * WW_HEIGHT_H * e->image->bpp / 8);
	if (e->wy == 0)
		e->wy = 1;
	else
		e->wy = 0;
}
