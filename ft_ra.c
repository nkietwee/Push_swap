/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:46:16 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/07 22:32:00 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_ra(t_list **stack_a)
// {
// 	t_list *tmp;

// 	tmp = *stack_a;
// 	while (*stack_a)
// 		(*stack_a) = (*stack_a)->next;
// 	// (*stack_a) = (*stack_a)->next;
// 	(*stack_a) = tmp;
// 	printf("ra\n");
// }


void	ft_ra(t_list **stack)
{
	t_list *tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = NULL;

	ft_lstadd_back(stack, tmp);
	write(1, "ra\n", 3);
}


// //Why It wrong
// void	ft_ra(t_list **stack_a)
// {
// 	t_list *tmp;

// 	tmp = (*stack_a);
// 	tmp->next = NULL;

// 	(*stack_a) = (*stack_a)->next;
// 	ft_lstadd_back(stack_a, tmp);
// }
