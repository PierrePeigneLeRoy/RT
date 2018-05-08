/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_objects.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeigne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 10:04:30 by ppeigne           #+#    #+#             */
/*   Updated: 2018/05/04 11:57:23 by ppeigne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_pos(t_obj *obj, float x, float y, float z)
{
	obj->x = x;
	obj->y = y;
	obj->z = z;
}

void	init_dim(t_obj *obj, float width, float, length, float depths)
{
	obj->width = width;
	obj->length = length;
	obj->depths = depths;
}

/*
 * rot_x = rotation on the x axes
 */

void	init_rot(t_obj *obj, float, rot_x, float rot_y, float rot_z)
{
	obj->rot_x = rot_x;
	obj->rot_y = rot_y;
	obj->rot_z = rot_z;
}
