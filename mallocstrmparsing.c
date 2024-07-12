/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocstrmparsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:19:44 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 18:26:46 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	sizef(t_map *mappy)
{
	int	i;
	int	j;

	i = 0;
	mappy->size_f = 0;
	while (mappy->mparsing[i])
	{
		if (strncmp(mappy->mparsing[i], "F", 1) == 0)
		{
			j = 1;
			while (mappy->mparsing[i][j] != '\0'
				&& mappy->mparsing[i][j] != '\n')
			{
				if (isword(&mappy->mparsing[i][j]))
					mappy->size_f++;
				j++;
			}
			break ;
		}
		i++;
	}
}

void	sizec(t_map *mappy)
{
	int	i;
	int	j;

	i = 0;
	mappy->size_c = 0;
	while (mappy->mparsing[i])
	{
		if (strncmp(mappy->mparsing[i], "C", 1) == 0)
		{
			j = 1;
			while (mappy->mparsing[i][j] != '\0'
				&& mappy->mparsing[i][j] != '\n')
			{
				if ((mappy->mparsing[i][j] >= '0'
					&& mappy->mparsing[i][j] <= '9')
					|| mappy->mparsing[i][j] == ',')
					mappy->size_c++;
				j++;
			}
			break ;
		}
		i++;
	}
}

void	sizeso(t_map *mappy)
{
	int	i;
	int	j;

	i = 0;
	mappy->size_so = 0;
	while (mappy->mparsing[i])
	{
		if (strncmp(mappy->mparsing[i], "SO", 2) == 0)
		{
			j = 2;
			while (mappy->mparsing[i][j] != '\0'
				&& mappy->mparsing[i][j] != '\n')
			{
				if (isword(&mappy->mparsing[i][j]))
					mappy->size_so++;
				j++;
			}
			break ;
		}
		i++;
	}
}

void	sizeno(t_map *mappy)
{
	int	i;
	int	j;

	i = 0;
	mappy->size_no = 0;
	while (mappy->mparsing[i])
	{
		if (strncmp(mappy->mparsing[i], "NO", 2) == 0)
		{
			j = 2;
			while (mappy->mparsing[i][j] != '\0'
				&& mappy->mparsing[i][j] != '\n')
			{
				if (isword(&mappy->mparsing[i][j]))
					mappy->size_no++;
				j++;
			}
			break ;
		}
		i++;
	}
}

void	sizewe(t_map *mappy)
{
	int	i;
	int	j;

	i = 0;
	mappy->size_we = 0;
	while (mappy->mparsing[i])
	{
		if (strncmp(mappy->mparsing[i], "WE", 2) == 0)
		{
			j = 2;
			while (mappy->mparsing[i][j] != '\0'
				&& mappy->mparsing[i][j] != '\n')
			{
				if (isword(&mappy->mparsing[i][j]))
					mappy->size_we++;
				j++;
			}
			break ;
		}
		i++;
	}
}
