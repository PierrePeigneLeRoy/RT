/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixels.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeigne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 15:25:17 by ppeigne           #+#    #+#             */
/*   Updated: 2018/05/07 15:31:33 by ppeigne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int		x_pix_to_ndc(int x)
{
	return((x + 0.5) / WIDTH);
}

int		y_pix_to_ndc(int y)
{
	return((y + 0.5) / HEIGHT);
}

int		x_ndc_to_world(int x)
{
	return(2 * x - 1);
}

int		y_ndc_to_world(int x)
{
	return(1 - 2 * y);
}
