/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 19:01:46 by nkietwee         ###   ########.fr       */
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

void sort_5(t_list **stack, int len)
{
	int	i;
	t_list *tmp;
	t_list *stack_b=NULL;

	i = len;
	tmp = (*stack);
	ft_ascend(stack, len);
	// ft_printstack_2(stack);
	// printf("len : %d\n" ,len);
	// exit(0);
	while (len > 0)
	{
		while (i > 3)
		{
			if (tmp->index <= len / 2)
			{
				ft_pb(&tmp, &stack_b);
					printf("pb_a1\n");
						ft_printstack_1(tmp);
					printf("pb_b1\n");
						ft_printstack_1(stack_b);
				printf("-------------");
				ft_pa(&tmp, &stack_b);
					printf("pb_a1\n");
						ft_printstack_1(tmp);
					printf("pb_b1\n");
						ft_printstack_1(stack_b);
				exit(0);
			}
			// else if (tmp->index <= len > 2)
			// {
			// }
		}

	}
	// ft_printstack_1(*stack);
	// ft_printstack_2(&stack_b);
}
