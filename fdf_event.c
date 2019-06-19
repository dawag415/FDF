/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_event.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:44:43 by iwagner           #+#    #+#             */
/*   Updated: 2017/09/28 15:58:40 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			fdf_event_gdp(char *str, t_env *e, int code)
{
	if (code == 1)
		fdf_zoom_out(e);
	if (code == 2)
		fdf_zoom_in(e);
	if (code == 4)
		fdf_warp_x(e);
	if (code == 5)
		fdf_warp_y(e);
	if (code == 6)
		fdf_raise_z(e);
	if (code == 7)
		fdf_lower_z(e);
	if (code == 8)
		fdf_wide_x(e);
	if (code == 9)
		fdf_narrow_x(e);
	if (code == 10)
		fdf_wide_y(e);
	if (code == 11)
		fdf_narrow_y(e);
	fdf_gdp_drawline(e);
	mlx_put_image_to_window(e->mlx.mlx, e->mlx.win, e->image->image, 0, 0);
	mlx_help_display(e);
	ft_putstr(str);
	return (0);
}

int			fdf_evnt_kbd2(int keycode, t_env *e)
{
	e->keycode = keycode;
	if (e->keycode == 125)
		fdf_event_gdp("Lower Z\n", e, 7);
	else if (e->keycode == 18)
		fdf_event_gdp("Wide X\n", e, 8);
	else if (e->keycode == 19)
		fdf_event_gdp("Narrow X\n", e, 9);
	else if (e->keycode == 21)
		fdf_event_gdp("Wide Y\n", e, 10);
	else if (e->keycode == 23)
		fdf_event_gdp("Narrow Y\n", e, 11);
	return (0);
}

int			fdf_evnt_kbd(int keycode, t_env *e)
{
	e->keycode = keycode;
	if (e->keycode == 53)
		ft_exit("Clean ");
	else if (e->keycode == 75)
		fdf_event_gdp("Horizontal trip\n", e, 0);
	else if (e->keycode == 67)
		fdf_event_gdp("Vertical trip\n", e, 0);
	else if (e->keycode == 71)
		fdf_event_gdp("Refresh\n", e, 0);
	else if (e->keycode == 15)
		fdf_event_gdp("Random\n", e, 0);
	else if (e->keycode == 69)
		fdf_event_gdp("Zooming in\n", e, 1);
	else if (e->keycode == 78)
		fdf_event_gdp("Zooming out\n", e, 2);
	else if (e->keycode == 123)
		fdf_event_gdp("Warp X\n", e, 4);
	else if (e->keycode == 124)
		fdf_event_gdp("Warp Y\n", e, 5);
	else if (e->keycode == 126)
		fdf_event_gdp("Raise Z\n", e, 6);
	else
		fdf_evnt_kbd2(keycode, e);
	return (0);
}

void		mlx_help_display(t_env *e)
{
	mlx_string_put(e->mlx.mlx, e->mlx.win, 95, 960, 0x99FF88,
			"HELP");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 980, 0x0000FF,
			"ESC : exit");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1000, 0x0000FF,
			"R : Random");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1020, 0x0000FF,
			"clear : refresh");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1040, 0x0000FF,
			"+/- : Zoom in/out");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1060, 0x0000FF,
			"*-/ : Shift Color");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1080, 0x0000FF,
			"Arrow Right: Warp Y   ;  Arrow Left: Warp X");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1100, 0x0000FF,
			"Arrow Up: Raise Z   ;  Arrow Down: Lower Z");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1120, 0x0000FF,
			"1: Widen X   ;  2: Narrow X");
	mlx_string_put(e->mlx.mlx, e->mlx.win, 40, 1140, 0x0000FF,
			"4: Widen Y   ;  5: Narrow Y");
}
