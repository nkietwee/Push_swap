/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:19:51 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/06 13:51:20 by nkietwee         ###   ########.fr       */
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
	if (top > mid && top > bot)
		ft_ra(stack_a);



	// printf("first:%ld\n" ,*((long *)(*stack_a)->number));

}
