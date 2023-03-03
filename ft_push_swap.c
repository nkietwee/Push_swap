/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/03 15:40:25 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<unistd.h>
// #include<stdio.h>
#include "push_swap.h"
// int ft_countdigit(int argc, char **argv)
// {
// 	int	i;
// 	int	j;
// 	int	count;
// 	char **nbr;

// 	i = 1;
// 	j = 0;
// 	count = 0;
// 	if (i < argc)
// 	{
// 		nbr = ft_split(argv[i], ' ');
// 		while (nbr[j] != NULL)
// 		{
// 			if ((ft_isdigit(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1)
// 			&& (ft_foundsym(argv, argc, '+') == 1))
// 				count++;
// 			j++;
// 		}
// 		i++;
// 	}
// }
long *ft_addnum(int argc, char **argv)
{
	int i;
	int j;
	int k;
	char **nbr;
	long *res;

	i = 1;
	j = 0;
	k = 0;
	res = (long *)malloc(sizeof(long) * 20);
	if (!res)
		return (0);
	/* argc >= 2*/
	if ((ft_isdigit(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		// printf("round : %d\n" ,i);
		j = 0;
		nbr = ft_split(argv[i], ' ');
		while (nbr[j] != NULL)
		{
			res[k] = ft_atoi(nbr[j]);
			printf("  	res[%d] : %ld\n", k, res[k]);
			j++;
			k++;
		}
		i++;
	}
	res[k] = '\0';
	return (res);
}

int ft_count_len(int argc, char **argv)
{
	int len;
	int i;
	int j;
	char **nbr;

	len = 0;
	i = 1;
	if ((ft_isdigit(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j])
			{
				// ans[len] = nbr[j];
				len++;
				j++;
			}
			i++;
		}
	}
	return (len);
}

int main(int argc, char **argv)
{
	long *res;
	int len;

	ft_check_arg(argc, argv);
	len = ft_count_len(argc, argv);
	res = (long *)malloc(sizeof(long) * (len + 1));
	if (!res)
		return (0);
	res = ft_addnum(argc, argv);
	ft_check_repeat(res);
	ft_check_ascending(res);
	ft_check_maxmin(res);

	return (0);
}
