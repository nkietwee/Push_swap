/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_printstack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:25:13 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:42:41 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_createstack(long long *res, int len)
{
	t_list		*tmp;
	t_list		*stack;
	int			i;
	long long	*tmp_res;

	i = 0;
	stack = NULL;
	if (!res)
		return (0);
	tmp_res = res;
	while (i < len)
	{
		tmp = ft_lstnew(&tmp_res[i]);
		ft_lstadd_back(&stack, tmp);
		i++;
	}
	return (stack);
}
