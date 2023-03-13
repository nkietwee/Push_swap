/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_printstack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:25:13 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 15:27:38 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_createstack(long *res, t_list **stack, int len) // why use double pointer of stack
{
	t_list *tmp;
	int	i;
	(void)len;

	i = 1;
	(*stack) = ft_lstnew(&res[0]);
	// printf("createstack\n");
	while (res[i])
	{
		tmp = ft_lstnew(&res[i]);
		ft_lstadd_back(stack, tmp);
		i++;
	}
	ft_printstack_1(*stack);
	// printf("finish1\n");
	// exit(0);
}

void ft_printstack_1(t_list *stack)
{
	while (stack)
	{
		// printf("round\n");
		printf("value %ld\n" , *((long *)(stack)->number));
		printf("     index %ld\n" , ((long)(stack)->index));
		(stack) = (stack)->next;
	}
	// exit(0);
}

void ft_printstack_2(t_list **stack)
{
	while ((*stack))
	{
		// printf("round\n");
		printf("value : %ld\n" , *((long *)((*stack)->number)));
		printf("	index : %ld\n" , ((long)((*stack)->index)));
		(*stack) = (*stack) ->next;
	}
}


// void ft_createstack(int *res, t_list **stack, int len) // why use double pointer of stack
// {
// 	t_list *tmp;
// 	int	i;
// 	(void)len;

// 	i = 1;
// 	(*stack) = ft_lstnew(&res[0]);
// 	// printf("createstack\n");
// 	while (res[i])
// 	{
// 		tmp = ft_lstnew(&res[i]);
// 		ft_lstadd_back(stack, tmp);
// 		i++;
// 	}
// 	ft_printstack_1(*stack);
// 	printf("finish1\n");
// 	exit(0);
// }

// void ft_printstack_1(t_list *stack)
// {
// 	while (stack)
// 	{
// 		// printf("round\n");
// 		printf("value %lu\n" , *((long *)(stack)->number));
// 		printf("     index %d\n" , ((int)(stack)->index));
// 		(stack) = (stack)->next;
// 	}
// 	// exit(0);
// }

// void ft_printstack_2(t_list **stack)
// {
// 	while ((*stack))
// 	{
// 		// printf("round\n");
// 		printf("value : %lu\n" , *((long *)((*stack)->number)));
// 		printf("	index : %d\n" , ((int)((*stack)->index)));
// 		(*stack) = (*stack) ->next;
// 	}
// }
