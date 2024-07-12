/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilstwo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:16:39 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 18:31:13 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	allstrpars(t_map *mappy)
{
	allsize(mappy);
	nomparsing(mappy);
	somparsing(mappy);
	eamparsing(mappy);
	wemparsing(mappy);
	fmparsing(mappy);
	cmparsing(mappy);
}
