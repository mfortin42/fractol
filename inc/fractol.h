/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 17:02:15 by mfortin           #+#    #+#             */
/*   Updated: 2016/03/02 18:11:44 by mfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/includes/libft.h"
# include <mlx.h>
# include <stdio.h>
# include <fcntl.h>
# include <math.h>

# define WIN_X 1000
# define WIN_Y 1000

# define KEYPRESS 2
# define KEYRELEASE 3
# define KEYPRESSMASK (1L<<0)
# define KEYRELEASEMASK (1L<<1)

# define ESC 53

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	char		*argv;

	void		*im;
	void		*imc;
	int			bpp;
	int			imlen;
	int			endi;

	int			i;
	int			x;
	int			y;

	float		x1;
	float		x2;
	float		y1;
	float		y2;

	int			iter_max;
	int			im_x;
	int			im_y;

	float		c_r;
	float		c_i;
	float		z_r;
	float		z_i;
	float		tmp;

	float		zoom;
	float		zoom_x;
	float		zoom_y;
}				t_env;

void			ft_ini_fract(t_env *e);
void			ft_ini_val_mandel(t_env *e);
void			ft_ini_val_julia(t_env *e);
void			ft_ini_val_bship(t_env *e);

void			ft_print_fract(t_env *e);
void			ft_print_mandel(t_env *e);
void			ft_print_julia(t_env *e);
void			ft_print_bship(t_env *e);

int				ft_core(t_env *e);
int				ft_key_biding(void);
int				ft_key_release(int keycode);
int				ft_do_key_action(void);

void			ft_put_pixel(t_env *e, int x, int y, int color);
void			ft_error(void);

#endif










