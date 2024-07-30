/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:59:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/30 19:16:13 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
	t_map	mappy;

	if (ac != 2)
		return (0);
	else
	{
		first_part_function(&mappy, av[1]);
		second_part_function(&mappy);
		free_all_parsing(&mappy);
	}
}

void	first_part_function(t_map *mappy, char *av)
{
	check_name_cube(av);
	sizemap(mappy, av);
	cpymap(mappy, av);
	check_all_texture(mappy);
	if (cpy_to_tab_text(mappy) == 1 || check_virgul_color(mappy) == 1
		|| check_number_color_c(mappy) == 1 || check_number_color_f(mappy) == 1)
	{
		free_tab(mappy->mapgnl);
		free(mappy->tab_text);
		ft_error("ERROR TEXTURE");
	}
	allsize(mappy);
	if (check_space_no(mappy) == 1 || check_space_ea(mappy) == 1
		|| check_space_we(mappy) == 1 || check_space_so(mappy) == 1
		|| cparsing(mappy) == 1 || fparsing(mappy) == 1)
	{
		free_tab(mappy->mapgnl);
		free(mappy->tab_text);
		free_str_direct(mappy);
		free(mappy->cfinal);
		free(mappy->ffinal);
		ft_error("ERROR TEXTURE 2");
	}
	free(mappy->tab_text);
}

void	second_part_function(t_map *map)
{
	if (cpy_tab_maps(map) == 1 || caractmap(map) == 1 || manyperso(map) == 1)
	{
		free_text(map);
		free(map->tab_map);
		ft_error("ERROR MAP 1");
	}
	filltab(map);
	if (check_final_map(map) == 1 || check_final_map_player(map) == 1)
	{
		free(map->tab_map);
		free_tab(map->mapfinal);
		free_text(map);
		ft_error("ERROR MAP 2");
	}
}
