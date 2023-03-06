/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/05 23:48:06 by nkietwee         ###   ########.fr       */
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
long *ft_addnum(int argc, char **argv, long *res)
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
	if ((ft_isdigit(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		// printf("round : %d\n" ,i);
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j] != NULL)
			{
				res[k] = ft_atoi(nbr[j]);
				// printf("  	s[%d] : %ld\n", k, res[k]);
				j++;
				k++;
			}
			i++;
		}
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
	if (len <= 2)
		exit(0);
	return (len);
}

int main(int argc, char **argv)
{
	long	*res;
	int		len;
	int		i;
	t_list	*stack_a;
	t_list	*tmp;

	ft_check_arg(argc, argv);
	len = ft_count_len(argc, argv);
	res = (long *)malloc(sizeof(long) * (len + 1));
	if (!res)
		return (0);
	res = ft_addnum(argc, argv ,res);
	ft_check_repeat(res);
	ft_check_ascending(res);
	ft_check_maxmin(res);

	stack_a =  ft_lstnew(&res[0]);
	i = 1;
	while (res[i])
	{
		tmp = ft_lstnew(&res[i]);
		ft_lstadd_back(&stack_a , tmp);
		i++;
	}

	// while (stack_a)
	// {
	// 	printf(" stack_a : %ld\n" , *( (long *) stack_a->number) );
	// 	// printf(" stack_a : %p\n" , ( (long *) stack_a->number) );
	// 	stack_a = stack_a->next;
	// }
	sort_3(&stack_a);
	// ft_ra(0);
	return (0);
}
