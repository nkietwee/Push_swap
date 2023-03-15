/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/15 14:33:38 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_setzero(t_list **stack)
{
	t_list *tmp;
	int	i;

	tmp = (*stack);
	i = 0;
	while(tmp)
	{
		(tmp) ->index = i;
		tmp = tmp->next;
	}
}

void ft_ascend(t_list  **stack, int len)
{
	t_list *tmp;
	t_list *max;
	long num_tmp;

	if(!stack)
		return;
	ft_setzero(stack);
	while (len > 0 )
	{
		num_tmp = -2147483648;
		tmp = (*stack);
		while (tmp)
		{
			if (( *((long *)tmp->number) > num_tmp) && ( ((int)tmp->index) < len))
			{
				max = tmp;
				num_tmp = *((long *)tmp->number);
			}
			tmp = tmp->next;
		}
		max->index = len;
		len--;
	}
}

void sort_5(t_list **stack_a, int len)
{
	int	i;
	t_list *tmp_a;
	t_list *stack_b=NULL;

	i = len;
	tmp_a = (*stack_a);
	ft_ascend(&tmp_a, len);
	// ft_printstack_2(&tmp_a);
	// exit(0);

	while (i > 3)
	{
		// printf("index : %d\n" , ((int)tmp_a->index ));
		// printf("i : %d\n" , i);
		if (( ((int)tmp_a->index ) <= len / 2 )) // index = 1 | 2
		{

			ft_pb(&tmp_a, &stack_b);
				// printf("stack_a\n");
				// ft_printstack_2(&tmp_a);
				// printf("stack_b\n");
				// ft_printstack_2(&stack_b);
			// exit(0);
			i--;
		}
		else
			tmp_a = tmp_a->next;
		// printf("be_index : %d\n" , ((int)tmp_a->index ));
		// printf("     be_value %lu\n" , *((long *)tmp_a->number ));
		// printf("af_index : %d\n" , ((int)tmp_a->index ));
		// printf("     af_value %lu\n" , *((long *)tmp_a->number ));
		// exit(0);
		// printf("i : %d\n" , i);
		if (i == 3)
		{
			break;
		}
	}
	while (i > 0)
	{
		if ()


	}
	printf("stack_a\n");
			ft_printstack_2(&tmp_a);
	printf("stack_b\n");
			ft_printstack_2(&stack_b);
	exit(0);
}
