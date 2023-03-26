/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/26 17:59:40 by nkietwee         ###   ########.fr       */
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
	long long num_tmp;

	if(!stack)
		return;
	// printf("hello\n");
	// ft_printstack_2(stack);
	// printf("end\n");
	// exit(0);
	ft_setzero(stack);
	while (len > 0 )
	{
		num_tmp = -2147483648;
		// num_tmp = -9223372036854775808;
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
void sort_5(t_list **stack_a,t_list *stack_b,  int len)
{
	int	count;
	int	top;
	int	round;
	t_list *tmp_a;
	t_list *tmp_b;

	count = len;
	top = 1;
	tmp_a = (*stack_a);
	tmp_b = stack_b;
	ft_ascend(&tmp_a, len);
	while (count >= 3)
	{
		tmp_a = (*stack_a);
		tmp_b = stack_b;
		top = 1;
		while (tmp_a && top <= len)
		{
			if (( ((int)(tmp_a)->index ) <= len / 2 ) && (top == 1))
			{
				ft_pb(stack_a, &stack_b);
				tmp_a = (*stack_a);
				top = 1;
				count--;
				// tmp_a = (*stack_a);
				// tmp_b = stack_b;
				// ft_printstack_a_b_1(tmp_a, tmp_b);
				// exit(0);
			}
			else if (( ((int)(tmp_a)->index ) <= len / 2 ) && (top > len / 2 )) // top == 3 || top == 4 || top == 5
			{
				round = top - 1;
				while (round < len)
				{
					tmp_a = (*stack_a);
					ft_rra(stack_a);
					round++;
				}
				top =  1; // for pb
			}
			else if (( ((int)(tmp_a)->index ) >= len / 2 ) && (top <= len / 2 )) // top == 2
			{
				round = 0;
				while (round < top)
				{
					tmp_a = (*stack_a);
					ft_ra(stack_a);
					round++;
				}
				tmp_a = (*stack_a);  // why It should have
				top =  1; // for pb
			}
			// else if (( ((int)(tmp_a)->index ) <= len / 2 ) && (top <= len / 2 )) // top == 2
			// {
			// 	ft_sa(stack_a);
			// 	top = 1;
			// }
			else
			{
				top++;
				tmp_a = tmp_a->next;
			}
			if (count == 3)
				break;

		}
		// (*stack_a) = tmp_a;
		// stack_b = tmp_b;
		if (count == 3)
		{
			tmp_a = (*stack_a);
			tmp_b = stack_b;
			break;
		}

	}
	if ( ((int)(tmp_b)->index )  < ((int)(tmp_b)->next->index ))
		ft_sb(&stack_b);
	sort_3(stack_a);
	/*Why It should in while loop*/
	ft_pa(stack_a, &stack_b);
	ft_pa(stack_a, &stack_b);
}
