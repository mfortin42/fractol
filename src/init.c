/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 13:05:13 by mfortin           #+#    #+#             */
/*   Updated: 2016/03/07 13:07:43 by mfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

void	ft_ini_val_mandel(t_env *e)
{
	e->x1 = -2.1;
	e->x2 = 0.6;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->im_x = 1000;
	e->im_y = 1000;
	e->zoom_x = e->im_x / (e->x2 - e->x1);
	e->zoom_y = e->im_y / (e->y2 - e->y1);
	e->iter_max = 150;
	e->col = 256;
}

void	ft_ini_val_julia(t_env *e)
{
	e->x1 = -1;
	e->x2 = 1;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->zoom = 400;
	e->im_x = (e->x2 - e->x1) * e->zoom;
	e->im_y = (e->y2 - e->y1) * e->zoom;
	e->iter_max = 250;
	e->col = 256;
}

void	ft_ini_val_bship(t_env *e)
{
	e->x1 = -2.1;
	e->x2 = 0.6;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->im_x = 1000;
	e->im_y = 1000;
	e->zoom_x = e->im_x / (e->x2 - e->x1);
	e->zoom_y = e->im_y / (e->y2 - e->y1);
	e->iter_max = 100;
	e->col = 256;
}

void	ft_ini_val_mandelbis(t_env *e)
{
	e->x1 = -2.1;
	e->x2 = 1;
	e->y1 = -1.2;
	e->y2 = 1.2;
	e->im_x = 1000;
	e->im_y = 1000;
	e->zoom_x = e->im_x / (e->x2 - e->x1);
	e->zoom_y = e->im_y / (e->y2 - e->y1);
	e->iter_max = 150;
	e->col = 256;
}