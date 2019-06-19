/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:40:28 by iwagner           #+#    #+#             */
/*   Updated: 2017/09/28 15:42:38 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			fdf_init_random_col(t_env *e)
{
	if (e->keycode == 67)
	{
		e->col->tab[0] += 150;
		e->col->tab[1] += 150;
		e->col->tab[2] += 150;
	}
	else if (e->keycode == 75)
	{
		e->col->tab[0] += 1333;
		e->col->tab[1] += 1333;
		e->col->tab[2] += 1333;
	}
	return (0);
}

int			fdf_init_env(t_env *e)
{
	if ((100 * e->size.nbline) == 0)
		return (0);
	e->image = mlx_init_pic(&e->mlx.mlx, WW_WIDTH_H, WW_HEIGHT_H);
	e->col = mlx_init_col(50, 50, 50, 0);
	e->zoom = 50;
	e->keycode = 0;
	e->wx = 0;
	e->wy = 0;
	e->wz = 0;
	e->sx = 1;
	e->sy = 1;
	return (1);
}

int			fdf_gdp_init_math(t_pos *start, int i, int j, t_env *e)
{
	double					x;
	double					y;
	double					z;

	e->fact.y = (double)(e->zoom * WW_HEIGHT_H) / (double)(100 *
			e->size.nbline);
	e->fact.x = (double)(e->zoom * WW_WIDTH_H) / (double)(100 *
			e->size.sizeline);
	x = e->fact.x + (j * e->fact.x * (double)e->sx);
	y = e->fact.y + (i * e->fact.y * (double)e->sy);
	z = (e->map[i][j] * e->fact.y) / 120.0f + (50.0f * cos(x) * e->wx) +
			(50.0f * cos(y) * e->wy) + (e->wz * e->map[i][j]);
	start->x = (WW_WIDTH_H * 2 / 5) +
		(x * cos(M_PI / 6.0f)) +
		(y * cos((M_PI / 6.0f) + 2.0f * (M_PI / 3.0f))) +
		(z * (z * cos((M_PI / 6.0f) - (2.0f * (M_PI / 3.0f)))));
	start->y = (WW_HEIGHT_H / 10) +
		(x * sin(M_PI / 6.0f)) +
		(y * sin((M_PI / 6.0f) + 2.0f * (M_PI / 3.0f))) +
		(z * sin((M_PI / 6.0f) - (2.0f * (M_PI / 3.0f)))) +
			(5.0f * (cos((z / M_PI))));
	return (0);
}

int			fdf_init_height(int **map, int size)
{
	int i;
	int j;
	int tmp;

	i = -1;
	j = -1;
	tmp = 0;
	while (map[++i])
	{
		j = -1;
		while (++j < size)
			if (tmp < ft_abso(map[i][j]))
				tmp = ft_abso(map[i][j]);
	}
	i = -1;
	if (tmp == 0)
		return (0);
	while (map[++i])
	{
		j = -1;
		while (++j < size)
			map[i][j] = ((map[i][j] * 100) / tmp);
	}
	return (tmp);
}
