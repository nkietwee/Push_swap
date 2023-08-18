/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:19:51 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:42:26 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_3(t_list **stack)
{
	long	top;
	long	mid;
	long	bot;

	top = *((long *)(*stack)->number);
	mid = *((long *)((*stack)->next->number));
	bot = *((long *)((*stack)->next->next->number));
	if (top > mid && mid < bot && top < bot)
		ft_sa(stack);
	else if (top > mid && mid > bot && top > bot)
	{
		ft_ra(stack);
		ft_sa(stack);
	}
	else if (top > mid && top > bot && mid < bot)
		ft_ra(stack);
	else if (top < mid && mid > bot && top < bot)
	{
		ft_rra(stack);
		ft_sa(stack);
	}
	else if (top < mid && top > bot && mid > bot)
		ft_rra(stack);
}
