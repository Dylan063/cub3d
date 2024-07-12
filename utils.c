/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:56:30 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 19:27:59 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	isword(char *str)
{
	if (letter(str) == 1 || *str == '.' || *str == '/' || *str == '_')
		return (1);
	return (0);
}

int isnumber(char *str)
{
    if ((*str >= '0'&& *str <= '9') || *str == ',')
        return (1);
    return (0);
}

int checklettertexturef(t_map *map)
{
    int i;
    int j;

    i = 0;
    while (map->mparsing[map->i])
        {
            if (strncmp(map->mparsing[map->i], "F", 1) == 0)
            {
                j = 1;
                while (map->mparsing[map->i][map->j] != '\n'
				&& map->mparsing[map->i][map->j] != '\0') 
                {
                    if (!isnumber(&map->mparsing[map->i][map->j]))
                        ft_error("wrong parsing");
                    j++;
                }
                break;
            }
            i++;
        }
}

void	allsize(t_map *mappy)
{
	sizeea(mappy);
	sizeno(mappy);
	sizewe(mappy);
	sizeso(mappy);
	sizec(mappy);
	sizef(mappy);
}

void	sizeea(t_map *mappy)
{
	int	i;
	int	j;

	i = 0;
	mappy->size_ea = 0;
	while (mappy->mparsing[i])
	{
		if (strncmp(mappy->mparsing[i], "EA", 2) == 0)
		{
			j = 2;
			while (mappy->mparsing[i][j] != '\0'
				&& mappy->mparsing[i][j] != '\n')
			{
				if (isword(&mappy->mparsing[i][j]))
					mappy->size_ea++;
				j++;
			}
			break ;
		}
		i++;
	}
}
