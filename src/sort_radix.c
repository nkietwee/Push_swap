/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:15:46 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:42:00 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sortradix(t_list **stack_a, t_list **stack_b, int len)
{
	int	i;
	int	x;
	int	start;
	int	count_pb;

	i = 0;
	ft_ascend(stack_a, len);
	while (((int)(*stack_a)->index >> i) > 0)
	{
		count_pb = 0;
		x = 0;
		while (x++ < len)
		{
			if (((int)((*stack_a)->index) >> i & 1) == 0)
				ft_pb(stack_a, stack_b);
			else if ((((int)((*stack_a)->index)) >> i & 1) == 1)
				ft_ra(stack_a);
			count_pb = ft_lstsize(*stack_b);
		}
		start = 0;
		while (start++ < count_pb)
			ft_pa(stack_a, stack_b);
		i++;
	}
}
