/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 15:37:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// long *ft_addnum(int argc, char **argv, long *res)
long	*ft_addnum(int argc, char **argv, long *res)
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
		// printf("round : %d\n" ,i);
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j] != NULL)
			{
				res[k] = ft_atoi(nbr[j]);
				j++;
				k++;
			}
			i++;
		}
	}
	// printf("%lu" ,res[2]);
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
	if ((ft_checknum(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
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
	else
		ft_putstr_fd("Error aaaja" ,2);
	if (len < 2)
		exit(0);
	return (len);
}

int main(int argc, char **argv)
{
	long	*res;
	int		len;
	t_list	*stack=NULL;
	// t_list	*stack_cpy=NULL;

	ft_check_arg(argc, argv);
	len = ft_count_len(argc, argv);
	res = (long *)malloc(sizeof(long) * (len + 1));
	if (!res)
		return (0);
	res = ft_addnum(argc, argv ,res);
	ft_check_repeat(res);
	ft_check_ascending(res);
	ft_check_maxmin(res);

	// ft_printstack_1(stack);
	ft_createstack(res, &stack, len); //protect null?
	// ft_createstack(res, &stack_cpy, len);
	ft_sortnumber(&stack, len);



	// stack =  ft_lstnew(&res[0]);
	// i = 1;
	// while (res[i])
	// {
	// 	tmp = ft_lstnew(&res[i]);
	// 	ft_lstadd_back(&stack , tmp);
	// 	i++;
	// }

	// while (stack_a)
	// {
	// 	printf(" stack_a : %ld\n" , *( (long *) stack_a->number) );
	// 	// printf(" stack_a : %p\n" , ( (long *) stack_a->number) );
	// 	stack_a = stack_a->next;
	// }
	// ft_ra(0);
	return (0);
}
