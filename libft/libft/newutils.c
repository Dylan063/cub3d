/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newutils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:32:33 by dravaono          #+#    #+#             */
/*   Updated: 2024/07/30 15:50:05 by dravaono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_tab(char **tab)
{
	int	i;

	if (!tab)
		return;
	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

int	letter(char *str)
{
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		return (1);
	return (0);
}

void	ft_error(char *str)
{
	printf("%s\n", str);
	exit(1);
}

int	is_whitespace(char *str)
{
	while (*str)
	{
		if (*str != ' ' && *str != '\n')
			return (0);
		str++;
	}
	return (1);
}
