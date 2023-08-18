/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:42:20 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_in_to_stk_b(t_list **stack_a, t_list **stack_b, int len, int *count)
{
	t_list	*tmp_a;
	int		top;

	top = 1;
	tmp_a = (*stack_a);
	if ((((int)(tmp_a)->index) <= len / 2) && (top == 1))
	{
		ft_push_stk_b(stack_a, stack_b, &top, count);
		tmp_a = (*stack_a);
	}
	else if ((((int)(tmp_a)->index) <= len / 2) && (top > len / 2))
		ft_rra_for_stacka(stack_a, &top, &len);
	else if ((((int)tmp_a->index) >= len / 2) && (top <= len / 2))
	{
		ft_ra_for_stacka(stack_a, &top);
		tmp_a = (*stack_a);
	}
	else
	{
		top++;
		tmp_a = tmp_a->next;
	}
}

void	ft_insidesplit(t_list **stack_a, t_list **stack_b, int len, int count)
{
	t_list	*tmp_a;
	int		top;

	top = 1;
	tmp_a = (*stack_a);
	while (tmp_a && top <= len)
	{
		ft_in_to_stk_b(stack_a, stack_b, len, &count);
		if (count == 3)
			break ;
	}
}

void	ft_split_sort5(int len, t_list **stack_a, t_list **stack_b)
{
	int		count;
	t_list	*tmp_a;
	t_list	*tmp_b;

	count = len;
	ft_insidesplit(stack_a, stack_b, len, count);
	tmp_a = (*stack_a);
	tmp_b = (*stack_b);
	if (((int)(tmp_b)->index) < ((int)(tmp_b)->next->index))
		ft_sb(stack_b);
	sort_3(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	sort_5(t_list **stack_a, t_list *stack_b, int len)
{
	ft_ascend(stack_a, len);
	ft_split_sort5(len, stack_a, &stack_b);
}
