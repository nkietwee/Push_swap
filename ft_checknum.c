/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:38:04 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/24 22:25:34 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checknum(char **str, int argc)
{
	int	i;
	int	j;

	i = 1;
	// if(!str)
	// 	return (0);
	while (i < argc)
	{
		j = 0;
		while (str[i][j])
		{
			if (! (str[i][j] >= '0' && str[i][j] <= '9') && !(str[i][j] == 32)
			&& !(str[i][j] == '-') && !(str[i][j] == '+'))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
