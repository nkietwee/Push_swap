/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:12:25 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:40:59 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_stack_b;
	t_list	*tmp_stack_b_first;

	tmp_stack_b_first = (*stack_b);
	tmp_stack_b = (*stack_b)->next;
	(*stack_b) = tmp_stack_b;
	tmp_stack_b_first->next = NULL;
	ft_lstadd_front(stack_a, tmp_stack_b_first);
	write(1, "pa\n", 3);
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_stack_a_first ;

	tmp_stack_a_first = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp_stack_a_first->next = NULL;
	ft_lstadd_front(stack_b, tmp_stack_a_first);
	write(1, "pb\n", 3);
}
