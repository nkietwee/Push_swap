/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_util.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:32:20 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/27 19:17:42 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freestack(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack);
	while ((*stack))
	{
		tmp = (*stack);
		(*stack) = (*stack)->next;
		free(tmp);
	}
}

void	ft_dbfree(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	ft_setzero(t_list **stack)
{
	t_list	*tmp;
	int		i;

	tmp = (*stack);
	i = 0;
	while (tmp)
	{
		(tmp)->index = i;
		tmp = tmp->next;
	}
}

void	ft_ascend(t_list **stack, int len)
{
	t_list		*tmp;
	t_list		*max;
	long long	num_tmp;

	if (!stack)
		return ;
	ft_setzero(stack);
	while (len > 0)
	{
		num_tmp = -2147483648;
		tmp = (*stack);
		while (tmp)
		{
			if ((*((long *)tmp->number) > num_tmp) && (((int)tmp->index) < len))
			{
				max = tmp;
				num_tmp = *((long *)tmp->number);
			}
			tmp = tmp->next;
		}
		max->index = len;
		len--;
	}
}
