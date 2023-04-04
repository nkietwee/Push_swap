/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:08:39 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/27 16:25:18 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	ft_sa(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	write(1, "sa\n", 3);
}

void	ft_sb(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	write(1, "sb\n", 3);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_stack_a;
	t_list	*tmp_stack_b;

	tmp_stack_a = (*stack_a);
	tmp_stack_b = (*stack_b);
	(*stack_a) = (*stack_a)->next;
	(*stack_b) = (*stack_b)->next;
	tmp_stack_a->next = (*stack_a)->next;
	tmp_stack_b->next = (*stack_b)->next;
	(*stack_a)->next = tmp_stack_a;
	(*stack_b)->next = tmp_stack_b;
	write(1, "ss\n", 3);
}
