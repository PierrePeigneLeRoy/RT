/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays_projection.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeigne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 13:47:54 by ppeigne           #+#    #+#             */
/*   Updated: 2018/05/08 14:08:13 by ppeigne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"




void	ray_projection(t_img *img)
{
	double ray[3];
	double ratio;
	double scale;
	int i;
	int	j;

	ratio = WIDTH / HEIGHT;
//	scale = tan()
	i = 0;
	while (i < WIDTH)
	{
		j = 0;
		while (j < HEIGHT)
		{
			ray[X] = (2 * (i + 0.5) / (double)WIDTH - 1) * ratio /* * scale */;
			ray[Y] = (1 - 2 * (j + 0.5) / (double)HEIGHT /* * scale */;
			ray[Z] = -1;
			ray = vector_normalization(ray);
		//	img->data[i + j * WIDTH] = cast_ray;
			j++;
		}
		i++;
	}
}
