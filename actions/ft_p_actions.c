/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:12:25 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/24 16:15:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"
#include "actions.h"

void ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp_stack_b;
	t_list *tmp_stack_b_first;

	tmp_stack_b_first = (*stack_b);
	tmp_stack_b = (*stack_b)->next;

	(*stack_b) = tmp_stack_b;
	tmp_stack_b_first->next = NULL;
	ft_lstadd_front(stack_a, tmp_stack_b_first);
	write(1, "pa\n" , 3);
}
void ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp_stack_a_first ;

	tmp_stack_a_first = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp_stack_a_first->next = NULL;

	ft_lstadd_front(stack_b, tmp_stack_a_first);
	write(1, "pb\n", 3);
}


// int main(void)
// {
// 	t_list *a1;
// 	t_list *a2;
// 	t_list *a3;
// 	t_list *a4;

// 	t_list *b1=NULL;

// 	a1 = malloc(sizeof(t_list));
// 	a2 = malloc(sizeof(t_list));
// 	a3 = malloc(sizeof(t_list));
// 	a4 = malloc(sizeof(t_list));

// 	*((long *)a1->number) = 10;
// 	a1->next = NULL;

// 	*((long *)a1->number) = 110;
// 	a2->next = NULL;

// 	*((long *)a1->number) = 1;
// 	a3->next = NULL;

// 	*((long *)a1->number) = 84;
// 	a4->next = NULL;

// 	a1->next = a2;
// 	a2->next = a3;
// 	a3->next = a4;

// 	printf("hello world\n");
// 	ft_pb(&a1, &b1);
// 	ft_printstack_1(a1);
// 	ft_printstack_1(b1);
// }
