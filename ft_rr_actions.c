/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:08:15 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 16:45:04 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

//fixed
void	ft_rra(t_list **stack)
{
	t_list *last;

	last = ft_lstlast(*stack);
	last->next = NULL;
	ft_lstadd_front(stack, last);

	write(1, "rra\n", 4);
}

void	ft_rrb(t_list **stack)
{
	t_list *last;

	last = ft_lstlast(*stack);
	last->next = NULL;
	ft_lstadd_front(stack, last);

	write(1, "rrb\n", 4);
}

// void	ft_rra(t_list **stack)
// {
// 	t_list *tmp;

// 	tmp = *stack;

// 	(*stack) = (*stack)->next->next; //final
// 	tmp->next->next = NULL;
// 	(*stack)->next = tmp;

// 	write(1, "rra\n", 4);
// }


