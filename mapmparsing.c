/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapmparsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:37:34 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 18:29:29 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	checkdoubles(t_map *map, char *line)
{
	if (ft_strncmp(line, "NO", 2) == 0)
		map->no++;
	else if (ft_strncmp(line, "SO", 2) == 0)
		map->so++;
	else if (ft_strncmp(line, "WE", 2) == 0)
		map->we++;
	else if (ft_strncmp(line, "F", 1) == 0)
		map->f++;
	else if (ft_strncmp(line, "C", 1) == 0)
		map->c++;
	else if (ft_strncmp(line, "EA", 2) == 0)
		map->ea++;
}

void	checkmparsing(t_map *map)
{
	int	i;

	map->no = 0;
	map->so = 0;
	map->we = 0;
	map->ea = 0;
	map->c = 0;
	map->f = 0;
	i = -1;
	while (map->mapgnl[++i])
		checkdoubles(map, map->mapgnl[i]);
	if (map->no != 1 || map->so != 1 || map->we != 1 || map->ea != 1
		|| map->c != 1 || map->f != 1)
	{
		free_tab(map->mapgnl);
		ft_error("Error Texture\n");
	}
}

void	mparsing(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	map->mparsing = malloc(sizeof(char *) * 7);
	while (map->mapgnl[i])
	{
		if (is_direction(map->mapgnl[i]))
			map->mparsing[j++] = map->mapgnl[i++];
		else if (!is_whitespace(map->mapgnl[i]))
			ft_error("Error Texture\n");
		else
			i++;
		if (j == 6)
			break ;
	}
	if (j != 6)
		ft_error("Error texture");
	map->mparsing[i] = 0;
	map->mapstart = i;
}

int	is_direction(char *mapgnl)
{
	if (ft_strncmp(mapgnl, "NO", 2) == 0 || ft_strncmp(mapgnl, "SO", 2) == 0
		|| ft_strncmp(mapgnl, "WE", 2) == 0 || ft_strncmp(mapgnl, "F", 1) == 0
		|| ft_strncmp(mapgnl, "C", 1) == 0 || ft_strncmp(mapgnl, "EA", 2) == 0)
		return (1);
	return (0);
}

void	nomparsing(t_map *map)
{
	map->i = 0;
	map->j = 0;
	map->k = 0;
	map->nostr = malloc(sizeof(char) * map->size_no + 1);
	if (!map->nostr)
		ft_error("problem with alloc");
	while (map->mparsing[map->i])
	{
		if (strncmp(map->mparsing[map->i], "NO", 2) == 0)
		{
			map->j = 2;
			while (map->mparsing[map->i][map->j] != '\n'
				&& map->mparsing[map->i][map->j] != '\0')
			{
				if (isword(&map->mparsing[map->i][map->j]))
					map->nostr[map->k++] = map->mparsing[map->i][map->j];
				map->j++;
			}
			map->nostr[map->k] = '\0';
			break ;
		}
		map->i++;
	}
}
