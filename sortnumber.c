/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortnumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:48:00 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/26 15:08:42 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

// void ft_sortnumber(t_list **stack_a, int len)
void ft_sortnumber(t_list **stack_a, t_list *stack_b, int len)
{
	//stack_cpy for sort5
	// ft_printstack_2(stack_a);
	// printf("end\n");
	// exit(0);
	// t_list *stack_cpy=NULL;
	if (len == 2)
		ft_sa(stack_a);
	else if (len == 3)
		sort_3(stack_a);
	else if (len == 5)
		// sort_5(stack_a, stack_cpy, len);
		sort_5(stack_a, stack_b, len);
	else
		// ft_sortradix(stack_a, stack_cpy, len);
		ft_sortradix(stack_a, stack_b, len);
}
