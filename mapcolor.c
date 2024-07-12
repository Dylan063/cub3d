/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcolor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 18:32:31 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 19:07:46 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	fparsing(t_map *mappy)
{
	int	i;
	int	count;
	
	mappy->fstrsplit = ft_split(mappy->fstr, ',');
	count = 0;
	i = -1;
	while (mappy->fstrsplit[++i])
		count++;
	mappy->ffinal = malloc(sizeof(int) * count);
	i = 0;
	while (i < count)
    {
        mappy->ffinal[i] = ft_atoi(mappy->fstrsplit[i]);
        i++;
    }
	if (mappy->ffinal[0] < 0 || mappy->ffinal[0] > 255)
		printf("ok");
	else
		printf("no");
	printf("%d\n", mappy->ffinal[0]);
}