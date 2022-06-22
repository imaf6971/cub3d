/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaf6971 <imaf6971@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:45:54 by imaf6971          #+#    #+#             */
/*   Updated: 2022/06/21 18:55:24 by imaf6971         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rendering_int.h"

static inline
void	*get_addr_by_coord(const t_mlxdata *data, const t_coord *coord)
{
	return (data->data_addr + (coord->y * data->line_length + \
	coord->x * (data->bits_per_pixel / 8)));
}

void	ft_img_pixel_put(const t_mlxdata *data, const t_coord *coord, int color)
{
	if (coord->x >= 0 && coord->x < WIN_WIDTH && coord->y >= 0 && coord->y < WIN_HEIGHT)
	{
		*(unsigned int *)get_addr_by_coord(data, coord) = color;
	}
}

