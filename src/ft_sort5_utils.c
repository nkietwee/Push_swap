/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:57:06 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:26:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	ft_push_stk_b(t_list **stack_a, t_list **stack_b, int *top, int *count)
{
	ft_pb(stack_a, stack_b);
	*top = 1;
	*count = *count - 1;
}

void	ft_rra_for_stacka(t_list **stack_a, int *top, int *len)
{
	int		round;
	t_list	*tmp_a;

	round = *top - 1;
	while (round < *len)
	{
		tmp_a = (*stack_a);
		ft_rra(stack_a);
		round++;
	}
	*top = 1;
}

void	ft_ra_for_stacka(t_list **stack_a, int *top)
{
	int		round;
	t_list	*tmp_a;

	round = 0;
	while (round < *top)
	{
		tmp_a = (*stack_a);
		ft_ra(stack_a);
		round++;
	}
	tmp_a = (*stack_a);
	*top = 1;
}
