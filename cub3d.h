/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:14:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/12 19:19:31 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "libft/inc/ft_printf.h"
# include "libft/inc/get_next_line_bonus.h"
# include "libft/inc/libft.h"
# include "minilibx/mlx.h"
# include "minilibx/mlx_int.h"
# include <fcntl.h>
# include <limits.h>
# include <math.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct s_map
{
	int		*ffinal;
	char	**fstrsplit;
	char	**mapgnl;
	char	**mparsing;
	char	**mapmap;
	char	*sostr;
	char	*nostr;
	char	*eastr;
	char	*cstr;
	char	*westr;
	char	*fstr;
	int		linemap;
	int		mapstart;
	int		size_so;
	int		size_no;
	int		size_we;
	int		size_ea;
	int		size_c;
	int		size_f;
	int		no;
	int		so;
	int		we;
	int		ea;
	int		c;
	int		f;
	int		i;
	int		j;
	int		k;
}			t_map;

void		fd_test(char *av);
void		cpymap(t_map *mappy, char *av);
void		sizemap(t_map *mappy, char *av);
void		mparsing(t_map *mappy);
void		mapmap(t_map *mappy);
int			is_direction(char *mapgnl);
void		ft_error(char *str);
void		checkmparsing(t_map *mappy);
void		free_tab(char **tab);
void		strparsing(t_map *mappy);
void		nomparsing(t_map *mappy);
void		somparsing(t_map *mappy);
void		eamparsing(t_map *mappy);
void		wemparsing(t_map *mappy);
int			isalphastr(char *str);
int 		isnumber(char *str);
int			letter(char *str);
void		allstrpars(t_map *mappy);
int			isword(char *str);
void		fmparsing(t_map *mappy);
void		cmparsing(t_map *mappy);
void		allsize(t_map *mappy);
void		sizeno(t_map *mappy);
void		sizeso(t_map *mappy);
void		sizec(t_map *mappy);
void		sizef(t_map *mappy);
void		sizewe(t_map *mappy);
void		sizeea(t_map *mappy);
void		fparsing(t_map *mappy);

#endif