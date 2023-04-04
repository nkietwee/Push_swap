/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:08:15 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/27 16:24:15 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"

void	ft_rra(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	(*stack) = ft_lstlast((*stack));
	(*stack)->next = tmp;
	while (tmp->next != (*stack))
		tmp = tmp ->next;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack);
	(*stack) = ft_lstlast((*stack));
	(*stack)->next = tmp;
	while (tmp->next != (*stack))
		tmp = tmp ->next;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_stack_a;
	t_list	*tmp_stack_b;

	tmp_stack_a = *stack_a;
	tmp_stack_b = *stack_b;
	(*stack_a) = ft_lstlast((*stack_a));
	(*stack_b) = ft_lstlast((*stack_b));
	(*stack_a)->next = tmp_stack_a;
	(*stack_b)->next = tmp_stack_b;
	while (tmp_stack_a->next != (*stack_a))
		tmp_stack_a = tmp_stack_a ->next;
	tmp_stack_a->next = NULL;
	while (tmp_stack_b->next != (*stack_b))
		tmp_stack_b = tmp_stack_b ->next;
	tmp_stack_b->next = NULL;
	write(1, "rrr\n", 4);
}
