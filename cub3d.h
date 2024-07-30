/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:14:59 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/30 18:38:56 by dravaono         ###   ########.fr       */
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
	char	*sostr;
	char	*nostr;
	char	*eastr;
	char	*westr;
	int		*ffinal;
	int		*cfinal;
	int		linemap;
	char	**mapgnl;
	char	**mapfinal;
	char	**fstrsplit;
	char	**cstrsplit;
	char	**tab_text;
	char	**tab_map;
	int		size_so;
	int		size_no;
	int		size_we;
	int		size_ea;
	int		size_c;
	int		size_f;
	int		sizeinfo;
	int		longest_line_length;
	int		size_length_map;
	int		no;
	int		so;
	int		we;
	int		ea;
	int		c;
	int		f;
	int		count;
	int		i;
	int		j;
}			t_map;

void		check_name_cube(char *av);
void		sizemap(t_map *mappy, char *av);
void		cpymap(t_map *mappy, char *av);
void		check_all_texture(t_map *map);
void		checkdoubles(t_map *map, char *line);
int			cpy_to_tab_text(t_map *map);
int			is_direction(char *mapgnl);
int			isnumber(char *str);
int			check_letter_texture_f(t_map *map);
int			check_letter_texture_c(t_map *map);
void		allsize(t_map *mappy);
void		sizeno(t_map *mappy);
void		sizeso(t_map *mappy);
void		sizec(t_map *mappy);
void		sizef(t_map *mappy);
void		sizewe(t_map *mappy);
void		sizeea(t_map *mappy);
int			check_space_no(t_map *map);
int			check_space_so(t_map *map);
int			check_space_ea(t_map *map);
int			check_space_we(t_map *map);
int			isword(char *str);
void		free_str_direct(t_map *map);
int			check_virgul_color(t_map *map);
int			check_number_color_c(t_map *map);
int			check_number_color_f(t_map *map);
void		first_part_function(t_map *mappy, char *av);
int			cpy_tab_maps(t_map *map);
int			malloc_map(t_map *map);
void		find_longest_line_length(t_map *mappy);
int			cparsing(t_map *mappy);
int			fparsing(t_map *mappy);
void		free_text(t_map *map);
int			caractmap(t_map *mp);
int			manyperso(t_map *mp);
void		filltab(t_map *mp);
char		*fill_line_space(t_map *map);
char		*send_treated_line(char *str, t_map *mp);
int			check_final_map(t_map *mp);
int			check_final_map_player(t_map *mp);
void		second_part_function(t_map *map);
void		free_all_parsing(t_map *map);

#endif