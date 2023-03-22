/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:57:08 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/22 19:33:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_maxmin(long long *res)
{
	int	i;

	i =	0;
	while(res[i])
	{
		if (res[i] > 2147483647 || res[i] < -2147483648)
		{
			// ft_putstr_fd("Error : max min" , 2);
			ft_putstr_fd("Error\n" , 2);
			exit(0);
		}
		i++;
	}
	return(-1);
}

int	ft_check_ascending(long long *res, int len)
{
	int	i;
	long	tmp;

	i = 1;
	tmp = res[0];
	// while (res[i])
	while (i < len)
	{
		if (tmp < res[i])
			tmp = res[i];
		else
		{
			return(1);
			// exit(0);
		}
		i++;
	}
	// int k = 0;
	// while(k < 3)
	// 	printf("res[ ] : %llu\n" , res[k++]);
	// exit(0);
	// ft_putstr_fd("Error : ascending\n", 2);
	// printf("check ascend\n");
	exit(0);
}

int ft_check_repeat(long long *res)
{
	int	i;
	int	round;
	int	len;
	int	check;

	check = 0;
	len = 0;
	round = -1;
	while(res[len]) // count
		len++;
	i = 0;
	while(check < len)
	{
		round++;
		i = round + 1; // move index;
		while (res[i] && i < len)
		{
			if (res[check] == res[i]) // loop int *
			{
				// ft_putstr_fd("Error : repeat\n", 2);
				ft_putstr_fd("Error\n", 2);
						// return (1);
				exit(0);
			}
			i++;
		}
		check++;
	}
	return(-1);
}

void	ft_check_arg(int argc, char **argv)
{
	int	i;

	i = 1;
	(void)argv;
	if (argc == 1)
	{
		// ft_putstr_fd("Error :arg\n" ,2);
		ft_putstr_fd("Error\n" ,2);
		exit(0);
	}
	while (i < argc )
	{
		if (argv[i][0] == '\0')
		// if (argv[i] == (void *)0)
		{
			// ft_putstr_fd("Error : argc", 2);
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		i++;
	}
}

int ft_foundsym(char **str, int argc, char c)
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
			if (str[i][j] == c && !ft_isdigit(str[i][j + 1]))
			{
				// ft_putstr_fd("Error :number" ,2);
				ft_putstr_fd("Error\n" ,2);
				exit (0);
			}	// return (0);
			j++;
		}
		i++;
	}
	return (1);
}
