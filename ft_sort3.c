/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:19:51 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/07 23:52:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_list **stack_a)
{
	long top;
	long mid;
	long bot;

	top = * ((long *)(*stack_a)->number);
	mid = *((long *)((*stack_a)->next->number));
	bot = *((long *)((*stack_a)->next->next->number));

	printf("top : %ld\n" ,top);
	printf("mid : %ld\n" ,mid);
	printf("bot : %ld\n" ,bot);
	if (top > mid && mid < bot && top < bot)
		ft_sa(stack_a);
	else if (top > mid && mid > bot && top > bot)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
	}
	else if (top > mid && top > bot &&  mid < bot)
		ft_ra(stack_a);
	else if (top < mid && mid > bot && top < bot)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (top < mid && top > bot && mid > bot)
		ft_rra(stack_a);


	long top2;
	long mid2;
	long bot2;

	top2 = * ((long *)(*stack_a)->number);
	mid2 = *((long *)((*stack_a)->next->number));
	bot2 = *((long *)((*stack_a)->next->next->number));

	printf("top : %ld\n" ,top2);
	printf("mid : %ld\n" ,mid2);
	printf("bot : %ld\n" ,bot2);



	// printf("first:%ld\n" ,*((long *)(*stack_a)->number));

}
