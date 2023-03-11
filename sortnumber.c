/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortnumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:48:00 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/11 15:10:16 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_sortnumber(t_list **stack, t_list **stack_cpy, int len)
{
	(void)len;
	(void)stack_cpy;

	//stack_cpy for sort5
	// ft_printstack_2(stack_cpy);
	if (len == 2)
		ft_sa(stack);
	else if (len == 3)
		sort_3(stack);
	else if (len == 5)
		sort_5(stack);

}
