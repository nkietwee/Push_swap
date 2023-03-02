/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/02 20:33:17 by nkietwee         ###   ########.fr       */
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
long	*ft_addnum(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	char **nbr;
	long	*res;

	i = 1;
	j = 0;
	k = 0;
	res = (long *)malloc(sizeof(long) * 20);
	if (!res)
		return(0);
	/* argc >= 2*/
	if ((ft_isdigit(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1)
	&& (ft_foundsym(argv, argc, '+') == 1))
	{
		while (i < argc)
		{
			// printf("round : %d\n" ,i);
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while(nbr[j] != NULL)
			{

				res[k] = ft_atoi(nbr[j]);
				printf("  	res[%d] : %ld\n", k,res[k]);
				j++;
				k++;
			}
			i++;
		}
	}
	res[k] = '\0';
	return(res);
}



int	main(int argc, char **argv)
{
	long *res;
	// char **nbr;
	res = malloc(sizeof(long) * 100);
	if (!res)
		return(0);
	ft_checkarg(argc, argv);
	res = ft_addnum(argc, argv);
	ft_checkrepeat(res);
	ft_checkascending(res);
	ft_check_maxmin(res);
	// if (ft_checkrepeat(res) == 1)
	// {
	// 	printf("number repeat\n");
	// 	return(0);
	// }
	// else
	// 	printf("number doesn't repeat\n");

	// if (ft_checkascending(res) == 1 )
	// 	printf("ascending");
	// else
	// 	printf("doesn't ascending");


	return(0);
}
