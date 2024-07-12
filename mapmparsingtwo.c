/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapmparsingtwo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:48:07 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 19:21:56 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	fmparsing(t_map *map)
{
	map->i = 0;
	map->j = 0;
	map->k = 0;
	map->fstr = malloc(sizeof(char) * map->size_f + 1);
	if (!map->fstr)
		ft_error("problem with alloc");
	while (map->mparsing[map->i])
	{
		if (strncmp(map->mparsing[map->i], "F", 1) == 0)
		{
			map->j = 1;
			while (map->mparsing[map->i][map->j] != '\n'
				&& map->mparsing[map->i][map->j] != '\0')
			{
				if (isnumber(&map->mparsing[map->i][map->j]))
					map->fstr[map->k++] = map->mparsing[map->i][map->j];
				map->j++;
			}
			map->fstr[map->k] = '\0';
			break ;
		}
		map->i++;
	}
}

void	cmparsing(t_map *map)
{
	map->i = 0;
	map->j = 0;
	map->k = 0;
	map->cstr = malloc(sizeof(char) * map->size_c + 1);
	if (!map->cstr)
		ft_error("problem with alloc");
	while (map->mparsing[map->i])
	{
		if (strncmp(map->mparsing[map->i], "C", 1) == 0)
		{
			map->j = 1;
			while (map->mparsing[map->i][map->j] != '\n'
				&& map->mparsing[map->i][map->j] != '\0')
			{
				if (isnumber(&map->mparsing[map->i][map->j]))
					map->cstr[map->k++] = map->mparsing[map->i][map->j];
				map->j++;
			}
			map->cstr[map->k] = '\0';
			break ;
		}
		map->i++;
	}
}

void	somparsing(t_map *map)
{
	map->i = 0;
	map->j = 0;
	map->k = 0;
	map->sostr = malloc(sizeof(char) * map->size_so + 1);
	if (!map->sostr)
		ft_error("problem with alloc");
	while (map->mparsing[map->i])
	{
		if (strncmp(map->mparsing[map->i], "SO", 2) == 0)
		{
			map->j = 2;
			while (map->mparsing[map->i][map->j] != '\n'
				&& map->mparsing[map->i][map->j] != '\0')
			{
				if (isword(&map->mparsing[map->i][map->j]))
					map->sostr[map->k++] = map->mparsing[map->i][map->j];
				map->j++;
			}
			map->sostr[map->k] = '\0';
			break ;
		}
		map->i++;
	}
}

void	wemparsing(t_map *map)
{
	map->i = 0;
	map->j = 0;
	map->k = 0;
	map->westr = malloc(sizeof(char) * map->size_we + 1);
	if (!map->westr)
		ft_error("problem with alloc");
	while (map->mparsing[map->i])
	{
		if (strncmp(map->mparsing[map->i], "WE", 2) == 0)
		{
			map->j = 2;
			while (map->mparsing[map->i][map->j] != '\n'
				&& map->mparsing[map->i][map->j] != '\0')
			{
				if (isword(&map->mparsing[map->i][map->j]))
					map->westr[map->k++] = map->mparsing[map->i][map->j];
				map->j++;
			}
			map->westr[map->k] = '\0';
			break ;
		}
		map->i++;
	}
}

void	eamparsing(t_map *map)
{
	map->i = 0;
	map->j = 0;
	map->k = 0;
	map->eastr = malloc(sizeof(char) * map->size_ea + 1);
	if (!map->eastr)
		ft_error("problem with alloc");
	while (map->mparsing[map->i])
	{
		if (strncmp(map->mparsing[map->i], "WE", 2) == 0)
		{
			map->j = 2;
			while (map->mparsing[map->i][map->j] != '\n'
				&& map->mparsing[map->i][map->j] != '\0')
			{
				if (isword(&map->mparsing[map->i][map->j]))
					map->eastr[map->k++] = map->mparsing[map->i][map->j];
				map->j++;
			}
			map->eastr[map->k] = '\0';
			break ;
		}
		map->i++;
	}
}
