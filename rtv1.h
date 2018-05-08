/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeigne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 10:03:22 by ppeigne           #+#    #+#             */
/*   Updated: 2018/05/07 15:18:38 by ppeigne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RTV1_H
# include <unistd.h>
# include <stdlib.h>
//# include "ocl_framework.h"
# include "./minilibx/mlx.h"
//# include "./kernels/kernel.h"
# include <math.h>


# define WIDTH 1080
# define HEIGHT 1080

# define X 0
# define Y 1
# define Z 2

# define MULT 1
# define ADD 0


# define CLEAR 1
# define NO_CLEAR 0
# define IN 1
# define OUT -1
# define MORE 1
# define LESS -1

typedef struct			s_obj
{
	float				x;
	float				y;
	float				z;
	float				width;
	float				length;
	float				depths;
	float				rot_x;
	float				rot_y;
	float				rot_z;
}						t_obj;

typedef	struct			s_vec
{
	float				origin[3];
	float				dir[3];
	float				t;
}						t_vec;

typedef struct			s_cam
{
	float				x;
	float				y;
	float				z;
	float				rot_x;
	float				rot_y;
	float				rot_z;
	float				vp_width;
	float				vp_height;
	float				vp_dist;
//	float				pitch_x;
//	float				pitch_y;
}						t_cam;

typedef struct			s_img
{
	void				*img_ptr;
	int					*data;
	int					size_l;
	int					bpp;
	int					endian;
}						t_img;

typedef struct			s_mlx
{
	void				*mlx_ptr;
	void				*win;
	t_img				img;
}						t_mlx;

void					ft_putchar(char c);
void					ft_putendl(char const *s);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strjoin(char const *s1, char const *s2);

void					init_pos(t_obj *obj, float x, float y, float z);
void					init_dim(t_obj *obj, float width, float length,
						float depths);
void					init_rot(t_obj *obj, float rot_x, float rot_y,
						float rot_z);

#endif
