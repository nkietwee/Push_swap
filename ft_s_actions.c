/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:08:39 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 16:08:59 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"push_swap.h"

void ft_sa(t_list **stack)
{
	t_list *tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = (*stack)->next;
	// (*stack) = tmp;
	(*stack)->next=tmp;
	write(1, "sa\n", 3);
}

void ft_sb(t_list **stack)
{
	t_list *tmp;

	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = (*stack)->next;
	// (*stack) = tmp;
	(*stack)->next=tmp;
	write(1, "sa\n", 3);
}
