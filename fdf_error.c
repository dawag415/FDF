/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 21:44:44 by iwagner           #+#    #+#             */
/*   Updated: 2017/09/28 21:45:16 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			fdf_event_expose(t_env *e)
{
	mlx_put_image_to_window(e->mlx.mlx, e->mlx.win, e->image->image, 0, 0);
	mlx_help_display(e);
	ft_putchar('\n');
	return (0);
}

int			**ft_error(int k)
{
	ft_putstr("Wrong map input on \nline :");
	ft_putnbr(k);
	ft_putstr("\n");
	return (0);
}

int			ft_exit(char *str)
{
	ft_putstr(str);
	ft_putstr("exit\n");
	exit(1);
	return (0);
}

int			ft_check_fdf_file(char *line)
{
	char	*end;

	end = NULL;
	end = ft_strrchr(line, '.');
	if (!end || end == line || ft_strcmp(end, ".fdf") != 0)
	{
		ft_putstr("Try a .fdf file\n");
		return (0);
	}
	return (1);
}

void		destroy_list(t_read *list)
{
	if (list)
	{
		destroy_list(list->next);
		free(list);
	}
}
