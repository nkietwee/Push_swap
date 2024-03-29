/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:57:08 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:42:53 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check_maxmin(long long *res, int len)
{
	int	i;

	i = 0;
	if (!res)
		exit(0);
	while (i < len)
	{
		if (res[i] > 2147483647 || res[i] < -2147483648)
		{
			free(res);
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		i++;
	}
	return (-1);
}

int	ft_check_ascending(long long *res, int len)
{
	int			i;
	long long	tmp;

	i = 1;
	if (!res)
		exit(0);
	tmp = res[0];
	while (i < len)
	{
		if (tmp < res[i])
			tmp = res[i];
		else
		{
			return (0);
		}
		i++;
	}
	free(res);
	exit(0);
}

void	ft_check_repeat(long long *res, int len)
{
	int	i;
	int	round;
	int	check;

	check = 0;
	round = -1;
	i = 0;
	if (!res)
		exit(0);
	while (check < len)
	{
		round++;
		i = round + 1;
		while (i < len)
		{
			if (res[check] == res[i])
			{
				free(res);
				ft_putstr_fd("Error\n", 2);
				exit(0);
			}
			i++;
		}
		check++;
	}
}

void	ft_check_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	(void)argv;
	if (argc == 1)
		exit(0);
	while (i < argc)
	{
		if (argv[i][0] == '\0')
		{
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		i++;
	}
}

int	ft_foundsym(char **str, int argc, char c)
{
	int	i;
	int	j;

	i = 1;
	if (!str)
		exit(0);
	while (i < argc)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == c && !ft_isdigit(str[i][j + 1]))
			{
				ft_putstr_fd("Error\n", 2);
				exit(0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
