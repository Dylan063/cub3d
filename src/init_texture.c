/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:28:35 by dravaono          #+#    #+#             */
/*   Updated: 2024/09/02 18:40:57 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_so(t_map *map)
{
	map->so_tex->img = mlx_xpm_file_to_image(map->mlx, map->sostr,
			&map->so_tex->width, &map->so_tex->height);
	if (!map->so_tex->img)
	{
		printf("ERROR PATH\n");
		exit(1);
	}
	map->so_tex->addr = mlx_get_data_addr(map->so_tex->img,
			&map->so_tex->bits_per_pixel, &map->so_tex->line_length,
			&map->so_tex->endian);
}

void	init_no(t_map *map)
{
	map->no_tex->img = mlx_xpm_file_to_image(map->mlx, map->nostr,
			&map->no_tex->width, &map->no_tex->height);
	if (!map->no_tex->img)
	{
		printf("ERROR PATH\n");
		exit(1);
	}
	map->no_tex->addr = mlx_get_data_addr(map->no_tex->img,
			&map->no_tex->bits_per_pixel, &map->no_tex->line_length,
			&map->no_tex->endian);
}

void	init_we(t_map *map)
{
	map->we_tex->img = mlx_xpm_file_to_image(map->mlx, map->westr,
			&map->we_tex->width, &map->we_tex->height);
	if (!map->we_tex->img)
	{
		printf("ERROR PATH\n");
		exit(1);
	}
	map->we_tex->addr = mlx_get_data_addr(map->we_tex->img,
			&map->we_tex->bits_per_pixel, &map->we_tex->line_length,
			&map->we_tex->endian);
}

void	init_ea(t_map *map)
{
	map->ea_tex->img = mlx_xpm_file_to_image(map->mlx, map->eastr,
			&map->ea_tex->width, &map->ea_tex->height);
	if (!map->ea_tex->img)
	{
		printf("ERROR PATH\n");
		exit(1);
	}
	map->ea_tex->addr = mlx_get_data_addr(map->ea_tex->img,
			&map->ea_tex->bits_per_pixel, &map->ea_tex->line_length,
			&map->ea_tex->endian);
}
