/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:08:15 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/15 17:18:10 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rra(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;

	(*stack) = ft_lstlast((*stack)); //final
	(*stack)->next = tmp;

	while (tmp->next != (*stack))
		tmp = tmp ->next;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}
void	ft_rrb(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;

	(*stack) = ft_lstlast((*stack)); //final
	(*stack)->next = tmp;

	while (tmp->next != (*stack))
		tmp = tmp ->next;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp_stack_a;
	t_list *tmp_stack_b;

	tmp_stack_a = *stack_a;
	tmp_stack_b = *stack_b;

	(*stack_a) = ft_lstlast((*stack_a)); //final
	(*stack_b) = ft_lstlast((*stack_b)); //final

	(*stack_a)->next = tmp_stack_a;
	(*stack_b)->next = tmp_stack_b;

	while(tmp_stack_a->next != (*stack_a))
		tmp_stack_a =  tmp_stack_a ->next;
	tmp_stack_a->next = NULL;
	while(tmp_stack_b->next != (*stack_b))
		tmp_stack_b =  tmp_stack_b ->next;
	tmp_stack_b->next = NULL;
	write(1, "rrr\n", 4);
}

// void	ft_rrb(t_list **stack)
// {
// 	t_list *tmp;

// 	tmp = *stack;

// 	(*stack) = ft_lstlast((*stack)); //final
// 	tmp->next->next = NULL;
// 	(*stack)->next = tmp;

// 	write(1, "rrb\n", 4);
// }


//fixed

// void	ft_rra(t_list **stack)
// {
// 	t_list *last;
// 	t_list *tmp;

// 	tmp = *stack;
// 	last = ft_lstlast(*stack);
// 	last -> next = tmp;
// 	(*stack) = last;

// 	write(1, "rra\n", 4);
// }



// void	ft_rrb(t_list **stack)
// {
// 	t_list *last;

// 	last = ft_lstlast(*stack);
// 	last->next = NULL;
// 	(*stack)->next->next = NULL;
// 	ft_lstadd_front(stack, last);

// 	write(1, "rrb\n", 4);
// }

// void	ft_rrr(t_list **stack_a, t_list **stack_b)
// {
// 	t_list *last_stack_a;
// 	t_list *last_stack_b;

// 	last_stack_a =  ft_lstlast(*stack_a); // why pass  *stack_a
// 	last_stack_a -> next = NULL;

// 	last_stack_b =  ft_lstlast(*stack_b);
// 	last_stack_b -> next = NULL;

// 	// (*stack_a) = (*stack_a)->next;
// 	// (*stack_b) = (*stack_b)->next;
// 	ft_lstadd_front(stack_a ,last_stack_a);
// 	ft_lstadd_front(stack_b ,last_stack_b);
// 	write(1, "rrr\n", 4);

// }


