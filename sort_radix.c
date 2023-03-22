/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:15:46 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/21 13:49:54 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int	ft_countbase2(int len)
{
	int count;

	count = 1;
	while (len > 1)
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
	ft_ascend(stack_a, len); // for set index
	// ft_printstack_a_b_2(stack_a , &stack_b);
	// exit(0);
	t_list *tmp_a = *stack_a;
	t_list *tmp_b = stack_b;

	while(i < countall)
	{
		int x = 0;
		count_pb = 0;
		while(x++ < len)
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
		}
		start = 0;
		while (start < count_pb)
		{
			ft_pa(&tmp_a, &tmp_b);
			start++;
		}
		i++;
	}
	// printf("exit\n");
	// ft_printstack_a_b_1(tmp_a , tmp_b);
	exit(0);
	// tmp_a = *stack_a;
	// tmp_b = stack_b;
}

// int main(void)
// {
// 	printf("%d\n" , ft_countbase2(4));


// }
// int	main(void)
// {
	// int	i = 32;
	// printf("%d\n" , (i >> 1));
// 	int i = 2;
// 	printf("%d\n" , (i >> 1));
// 	printf("%d\n" , (i >> 1) & 1);
// 	printf("%d\n" , (i >> 1) & 0);
// 	i = 4;
// 	printf("--------\n");
// 	printf("%d\n" , (i >> 2));
// 	printf("%d\n" , (i >> 2) & 1);
// 	printf("%d\n" , (i >> 2) & 0);
// }

