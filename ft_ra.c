/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:46:16 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/06 13:55:32 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **stack_a)
{
	t_list *tmp;

	tmp = *stack_a;
	while (*stack_a)
		(*stack_a) = (*stack_a)->next;
	*stack_a = tmp;
	printf("ra");
}
