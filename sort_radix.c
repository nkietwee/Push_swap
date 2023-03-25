/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:15:46 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/25 22:20:05 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
/*  ft_countbase2 count number of digit for base2(because I use bitwise operator) */
int	ft_countbase2(int len)
{
	int count;

	count = 0;
	while (len > 0)
	{
		count++;
		len = len / 2;
	}
	return (count);
}

void ft_sortradix(t_list **stack_a, t_list *stack_b,int len)
{
	int	i;
	int start;
	int count_pb;
	int	countall;

	i = 0;
	count_pb = 0;
	countall = ft_countbase2(len);
	// printf("%d\n", countall);
	// exit(0);
	// because len is max value so I find base 2 of len , It mean max.
	ft_ascend(stack_a, len); // for set index
	// ft_printstack_a_b_2(stack_a , &stack_b);
	// exit(0);
	t_list *tmp_a = *stack_a;
	t_list *tmp_b = stack_b;

	while(i < countall)
	{
		int x = 0;
		count_pb = 0;
		while(x < len)
		{
			if ( (((int)((tmp_a)->index))>>i & 1) == 0)
			{
				ft_pb(&tmp_a, &tmp_b);
				count_pb++;
			}
			else if( (((int)((tmp_a)->index))>>i & 1) == 1)
			{
				ft_ra(&tmp_a);
			}
			x++;
		}
		start = 0;
		while (start < count_pb)
		{
			ft_pa(&tmp_a, &tmp_b);
			start++;
		}
		i++;
	}
	// ft_printstack_a_b_1(tmp_a , tmp_b);
	exit(0);
	// tmp_a = *stack_a;
	// tmp_b = stack_b;
}

// int main(void)
// {
// 	printf("%d\n" , ft_countbase2(4));
// }

