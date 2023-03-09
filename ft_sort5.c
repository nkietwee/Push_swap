/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/09 17:35:11 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sort_5(t_list **stack)
{
	// long t1;
	// long t2;
	// long t3;
	// long t4;
	// long t5;

	// t1 = * ((long *)(*stack)->number);
	// t2 = *((long *)((*stack)->next->number));
	// bot = *((long *)((*stack)->next->next->number));

	// printf("top : %ld\n" ,top);
	// printf("mid : %ld\n" ,mid);
	// printf("bot : %ld\n" ,bot);
	t_list *head1;
	t_list *head2;

	head1 = (*stack);
	while (head1)
	{
		printf("before %ld\n" , *((long *)(head1)->number));
		(head1) = (head1)->next;
	}
	ft_set_index(stack);

	head2 = (*stack);
	while (head2)
	{
		printf("                after %ld\n" , *((long *)(head2)->number));
		(head2) = (head2)->next;
	}


}
