/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_biding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/01 21:52:55 by mfortin           #+#    #+#             */
/*   Updated: 2016/03/01 22:52:54 by mfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fractol.h"

int	ft_core(t_env *e)
{
	mlx_put_image_to_window(e->mlx, e->win, e->im, 0, 0);
	return (1);
}
