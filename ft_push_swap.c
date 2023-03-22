/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/22 19:26:12 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// long *ft_addnum(int argc, char **argv, long *res)
void ft_addnum(int argc, char **argv, long long *res)
{
	int i;
	int j;
	int k;
	char **nbr;
	// long *res;

	i = 1;
	j = 0;
	k = 0;
	// res = (long *)malloc(sizeof(long) * 20);
	// if (!res)
	// 	return (0);
	/* argc >= 2*/
	if ((ft_checknum(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j] != NULL)
			{
				res[k] = ft_atoi(nbr[j]);
				// printf( "res[ ] : %llu\n" , res[k]);
				j++;
				k++;
			}
			i++;
		}
		// exit(0);
	}
	// k = 0;
	// while(k < 5)
	// 	printf("res[ ] : %llu\n" , res[k++]);
	// exit(0);
	// res[k] = (long long)NULL;
}

int ft_count_len(int argc, char **argv)
{
	int len;
	int i;
	int j;
	char **nbr;

	len = 0;
	i = 1;
	// printf("Hello\n");
	if ((ft_checknum(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
		// printf("argv : %s\n" ,argv[1]);
		// exit(0);
			// printf("%s\n", argv[1]);
			// exit(0);
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j])
			{
				// ans[len] = nbr[j];
				// printf("nbr : %s\n" , nbr[0]);
				// exit(0);
				len++;
				j++;
			}
			i++;
		}
	}
	else
		// ft_putstr_fd("Error aaaja" ,2);
		ft_putstr_fd("Error\n" ,2);
	// if (len < 1)
	// 	exit(0);
	return (len);
}

int main(int argc, char **argv)
{
	long long	*res;
	int		len;
	t_list	*stack=NULL;

	ft_check_arg(argc, argv);
	len = ft_count_len(argc, argv);
	// printf("%d\n" , len);
	// exit(0);
	res = (long long *)malloc(sizeof(long long) * (len));
	if (!res)
		return (0);
	ft_addnum(argc, argv ,res);
	ft_check_repeat(res);
	ft_check_ascending(res , len);
	ft_check_maxmin(res);
	// int k = 0;
	// while(k < 3)
	// 	printf("res[ ] : %llu\n" , res[k++]);
	// exit(0);
	ft_createstack(res, &stack, len); //protect null?
	// if (len == 5)
	// printf("Hello World\n");
	// ft_printstack_1(stack); // why I can't print zero
	// exit(0);
	ft_sortnumber(&stack, len);

	return (0);
}
