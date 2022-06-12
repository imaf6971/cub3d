/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaf6971 <imaf6971@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 21:46:35 by imaf6971          #+#    #+#             */
/*   Updated: 2022/06/12 21:52:18 by imaf6971         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rendering_int.h"

t_mlxdata	*mlx_data(void)
{
	static t_mlxdata	data;

	return (&data);
}

void	init_mlx(void)
{
	t_mlxdata	*data;

	data = mlx_data();
	data->mlx_ptr = assert_not_null(mlx_init());
	data->win_ptr = assert_not_null(
		mlx_new_window(data->mlx_ptr, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE));
	mlx_loop(data->mlx_ptr);
}
