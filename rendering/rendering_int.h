/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering_int.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaf6971 <imaf6971@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 21:45:59 by imaf6971          #+#    #+#             */
/*   Updated: 2022/06/12 21:51:55 by imaf6971         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDERING_INT_H
# define RENDERING_INT_H

# define WIN_WIDTH 640
# define WIN_HEIGHT 480
# define WIN_TITLE "cub3d"

# include "../minilibx/mlx.h"
# include "../utils/utils.h"

typedef struct s_mlx_data {
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	char		*data_addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
}	t_mlxdata;

#endif
