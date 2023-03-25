/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/25 22:11:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_addnum(int argc, char **argv, long long *res)
{
	int i;
	int j;
	int k;
	char **nbr=NULL;

	i = 1;
	j = 0;
	k = 0;
	if (!res)
		exit(0);
		// return (0);
	/* argc >= 2*/
	if ((ft_checknum(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			if (!nbr)
				return ; // or exit
			while (nbr[j] != NULL)
			{
				res[k] = ft_atoi(nbr[j]);
				// printf( "res[ ] : %llu\n" , res[k]);
				j++;
				k++;
			}
			ft_dbfree(nbr);
			i++;
		}
		// exit(0);
	}
}

int ft_count_len(int argc, char **argv)
{
	int len;
	int i;
	int j;
	char **nbr=NULL;

	len = 0;
	i = 1;
	// if (ft_foundsym(argv, argc, '-') == 1)
	// 	printf("entry\n");
	// exit(0);

	if ((ft_checknum(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			if(!nbr)
				return(0); // exit
			while (nbr[j])
			{
				len++;
				j++;
			}
			// if(nbr)
			ft_dbfree(nbr);
			i++;
		}
	}
	else
	{
		// printf("entry\n");
		// exit(0);
		// ft_dbfree(argv);
		// ft_putstr_fd("Error aaaja" ,2);
		ft_putstr_fd("Error\n" ,2);
	// if (len < 1)
	// 	exit(0);
	}
	// printf("entry\n");
	// exit(0);

	return (len);
}

int main(int argc, char **argv)
{
	long long	*res;
	int		len;
	t_list	*stack_a=NULL;
	t_list	*stack_b=NULL;

	ft_check_arg(argc, argv);
	len = ft_count_len(argc, argv);
	// printf("found\n");
	// exit(0);
	res = (long long *)malloc(sizeof(long long) * (len));
	if (!res)
		return (0);
	ft_addnum(argc, argv ,res);
	ft_check_repeat(res, len);
	ft_check_ascending(res , len);
	// int i = 0;
	// while(i < len)
	// 	printf("%lld\n" , res[i++]);
	// printf("end\n");
	// exit(0);
	// ft_check_maxmin(res , len);
	// exit(0);
	ft_createstack(res, &stack_a, len); //protect null?
	// ft_printstack_1(stack_a);
	// exit(0);
	ft_sortnumber(&stack_a, stack_b, len);
	// ft_sortnumber(&stack_a, len);
	ft_freestack(&stack_a);
	ft_freestack(&stack_b);
	return (0);
}
