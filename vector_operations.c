/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeigne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:28:17 by ppeigne           #+#    #+#             */
/*   Updated: 2018/05/07 14:48:59 by ppeigne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	euclidean_norm(double vec[3])
{
	return (sqrt(vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[3]))
}

double	*vector_normalization(double vec[3])
{
	double 	norm_inv;
	
	if (euclidian_norm(vec) == 0)
		return (NULL);	
	norm_inv = 1 / (euclidean_norm(vec));
	vec[0] *= norm_inv;
	vec[1] *= norm_inv;
	vec[2] *= norm_inv;
	return (vec);
}

double	*dot_product(double vec_0[3], double vec_1[3])
{
	double	product[3];

	product[0] = vec_0[0] * vec_1[0];
	product[1] = vec_0[1] * vec_1[1];
	product[2] = vec_0[2] * vec_1[2];
	return (product);
}

double	*cros_product(double vec_0[3], double vec_1[3])
{
	double	product[3];

	product[0] = vec_0[1] * vec_1[2] - vec_0[2] * vec_1[1];
	product[1] = vec_0[2] * vec_1[0] - vec_0[0] * vec_1[2];
	product[2] = vec_0[0] * vec_1[1] - vec_0[1] * vec_1[0];
	return (product);
}

double	*operation(double vec[3], double scalar, int type)
{
	if (type == MULT)
	{
		vec[0] *= scalar;
		vec[1] *= scalar;
		vec[2] *= scalar;
	}
	else 
	{
		vec[0] += scalar;
		vec[1] += scalar;
		vec[2] += scalar;
	}
	return (vec);
}
