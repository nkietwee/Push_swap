/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:38:04 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:42:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_checknum(char **str, int argc)
{
	int	i;
	int	j;

	i = 1;
	if (!str)
		return (0);
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

//If first character is number and second is sym
//./push_swap 1 3+2 5
//./push_swap 1 3+2 5+

void	ft_checksym(int argc, char **argv, char c)
{
	t_sym	check;

	check.i = 1;
	while (check.i < argc)
	{
		check.j = 0;
		check.nbr = ft_split(argv[check.i], ' ');
		while (check.nbr[check.j])
		{
			check.k = 0;
			while (check.nbr[check.j][check.k])
			{
				if (ft_isdigit(check.nbr[check.j][check.k]) == 1
				&& check.nbr[check.j][check.k + 1] == c)
				{
					ft_putstr_fd("Error\n", 2);
					exit(0);
				}
				check.k++;
			}
			check.j++;
		}
		ft_dbfree(check.nbr);
		check.i++;
	}
}
