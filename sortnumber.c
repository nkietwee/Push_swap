/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortnumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:48:00 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/09 13:51:07 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_sortnumber(t_list **stack, int len)
{
	if (len == 2)
		ft_sa(stack);
	else if (len == 3)
		sort_3(stack);
	else if (len == 5)
		sort_5(stack);
}
