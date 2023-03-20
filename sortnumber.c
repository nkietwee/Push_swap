/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortnumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:48:00 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/20 14:42:20 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_sortnumber(t_list **stack, int len)
{

	//stack_cpy for sort5
	// ft_printstack_2(stack_cpy);
	t_list *stack_cpy=NULL;
	if (len == 2)
		ft_sa(stack);
	else if (len == 3)
		sort_3(stack);
	else if (len == 5)
		sort_5(stack,stack_cpy, len);
	else
		ft_sortradix(stack,stack_cpy, len);



}
