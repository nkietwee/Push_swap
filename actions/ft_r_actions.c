/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:06:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:27:14 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/push_swap.h"

void	ft_ra(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	write(1, "ra\n", 3);
}

void	ft_rb(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	write(1, "rb\n", 3);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp_a->next = NULL;
	ft_lstadd_back(stack_a, tmp_a);
	tmp_b = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	tmp_b->next = NULL;
	ft_lstadd_back(stack_b, tmp_b);
	write(1, "rrr\n", 4);
}
