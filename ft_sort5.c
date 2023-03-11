/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/11 20:55:02 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sort_5(t_list **stack, t_list **stack_cpy, int len)
{
	(void)stack;
	(void)stack_cpy;
	(void)len;
	// ft_ascending((*stack_cpy));
	// ft_addindex((*stack_cpy));
	printf("sort5");
	ft_testascend(stack, len);
	// printf("stack2\n");
	ft_printstack_2(stack_cpy);
	exit(0);
}
