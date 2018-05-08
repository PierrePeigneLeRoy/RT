/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeigne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:47:57 by ppeigne           #+#    #+#             */
/*   Updated: 2018/05/07 11:30:02 by ppeigne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"
/*
void	release_ocl(t_ocl *ocl)
{
	ocl->ret = clFlush(*ocl->queue);
	ocl->ret = clFinish(*ocl->queue);
	ocl->ret = clReleaseKernel(*ocl->kernel);
	ocl->ret = clReleaseProgram(*ocl->program);
	ocl->ret = clReleaseCommandQueue(*ocl->queue);
	ocl->ret = clReleaseContext(ocl->ctxt);
	free(ocl);
}
*/

void	convert_pixel(t_cam *cam)
{
	// for a pixel (i, j)
	
	v_x = (i - cam->vp_width / 2) * cam->pitch_x;
	v_y = (j - cam->vp_height / 2) * cam->pitch_y;
	v_z = vp_dist;
}

void	init_camera(t_cam *cam)
{
	cam->x = 0;
	cam->y = 0;
	cam->z = -1;
	cam->vp_width = 0.35;
	cam->vp_height = 0.5;
	cam_vp_dist = 10;
}

int		main(int ac, char **av)
{
//	char	**arg_val;
	t_mlx	mlx;
	t_cam	cam;
//	mlx.ocl = (t_ocl*)malloc(sizeof(t_ocl));
	
	
	mlx.mlx_ptr = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx_ptr, WIDTH, HEIGHT, "fractol");
	mlx.img.img_ptr = mlx_new_image(mlx.mlx_ptr, WIDTH, HEIGHT);
	mlx.img.data = (int *)mlx_get_data_addr(mlx.img.img_ptr, &mlx.img.bpp,
			&mlx.img.size_l, &mlx.img.endian);
//	init_ocl(mlx.ocl, 1, mlx.fract->p_names, mlx.fract->k_names);
	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win, mlx.img.img_ptr, 0, 0);
	mlx_loop(mlx.mlx_ptr);
}
