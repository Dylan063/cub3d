/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:11:51 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 18:51:02 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	cpymap(t_map *mappy, char *av)
{
	int	fd;
	int	y;

	fd = open(av, O_RDONLY);
	mappy->mapgnl = malloc((sizeof(char *) + 1) * mappy->linemap);
	y = 0;
	mappy->mapgnl[y] = get_next_line(fd);
	while (++y < mappy->linemap)
		mappy->mapgnl[y] = get_next_line(fd);
	mappy->mapgnl[y] = NULL;
	close(fd);
	checkmparsing(mappy);
}

void	sizemap(t_map *mappy, char *av)
{
	int		fd;
	char	*mapline;

	fd = open(av, O_RDONLY);
	mapline = get_next_line(fd);
	mappy->linemap = 0;
	while (mapline)
	{
		free(mapline);
		mappy->linemap++;
		mapline = get_next_line(fd);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	t_map	mappy;

	if (ac != 2)
		return (0);
	else
	{
		sizemap(&mappy, av[1]);
		cpymap(&mappy, av[1]);
		mparsing(&mappy);
		mapmap(&mappy);
		allstrpars(&mappy);
		fparsing(&mappy);
	}
}

void	mapmap(t_map *mappy)
{
	int	j;
	int	i;
	int	k;
	int	c;

	i = mappy->mapstart;
	k = 0;
	c = 0;
	while (mappy->mapgnl[mappy->mapstart++])
		k++;
	mappy->mapmap = malloc(sizeof(char *) * k + 1);
	while (mappy->mapgnl[i])
	{
		k = 0;
		j = 0;
		mappy->mapgnl[i][ft_strlen(mappy->mapgnl[i]) - 1] = '\0';
		while (mappy->mapgnl[i][j])
			if (mappy->mapgnl[i][j++] != ' ')
				k++;
		if (k != 0)
			mappy->mapmap[c++] = mappy->mapgnl[i];
		i++;
	}
}
