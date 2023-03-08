/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:08:15 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/07 23:47:27 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
// void	ft_rra(t_list **stack)
// {
// 	t_list *tmp;

// 	// tmp = (*stack);
// 	// printf("tmp : %lu\n" , (*(long *)((tmp)->number)));

// 	// tmp = (*stack)->next;
// 	// printf("tmp :  %lu\n" , (*(long *)((tmp)->number)));

// 	tmp = (*stack)->next;
// 	tmp->next = stack;
// 	// printf("tmp :   %lu\n" , (*(long *)((tmp)->number)));
// 	// (*stack) = (*stack) -> next;
// 	// tmp->next = NULL;
// 	// ft_lstadd_front(stack, tmp);
// 	write(1, "rra\n", 4);
// }


// void	ft_rra(t_list **stack)
// {
// 	t_list *tmp;

// 	tmp = (*stack)->next->next;
// 	printf("tmp : %lu\n" , (*(long *)((tmp)->number)));
// 	// (*stack) = (*stack) -> next;
// 	tmp->next = NULL;
// 	ft_lstadd_front(stack, tmp);
// 	write(1, "rra\n", 4);
// }
void	ft_rra(t_list **stack)
{
	t_list *tmp;

	tmp = *stack;

	(*stack) = (*stack)->next->next; //final
	// printf("stack :    %ld\n" ,*((long *)(*stack)->number));
	tmp->next->next = NULL;
	// (*stack) = tmp;//
	(*stack)->next = tmp;
	// printf("stack :    %ld\n" ,*((long *)(*stack)->number));

	write(1, "rra\n", 4);
}
