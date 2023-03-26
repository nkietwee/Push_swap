/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_printstack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:25:13 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/26 17:42:09 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_createstack(long long *res, int len) // why use double pointer of stack
// void ft_createstack(long long *res, t_list **stack, int len) // why use double pointer of stack
{
	t_list *tmp;
	t_list *stack=NULL;
	int i;
	long long *tmp_res;

	i = 0;
	tmp_res = res;
	// tmp = malloc(sizeof(t_list) * len);
	// if(!tmp)
	// return;
	// while (res[i])
	while (i < len)
	{
		// tmp[i] = *(ft_lstnew(&tmp_res[i]));
		tmp = ft_lstnew(&tmp_res[i]);
		ft_lstadd_back(&stack, tmp);
		// ft_lstclear(&tmp, free);
		// free(tmp);
		i++;
	}
	// ft_lstclear(&tmp, free);
	// exit(0);
	// free(tmp);
	// free(res);
	return(stack);
}

void ft_printstack_1(t_list *stack)
{
	t_list *tmp;

	tmp = stack;
	while (tmp)
	{
		printf("value : %lld | index : %d\n", *((long long *)((tmp)->number)), ((int)((tmp)->index)));
		// printf("value %ld\n" , *((long *)(stack)->number));
		// printf("     index %ld\n" , ((long)(stack)->index));
		(tmp) = (tmp)->next;
	}
}

void ft_printstack_2(t_list **stack)
{
	while ((*stack))
	{
		printf("value : %ld | index : %ld\n", *((long *)((*stack)->number)), ((long)((*stack)->index)));
		// printf("value : %ld\n" , *((long *)((*stack)->number)));
		// printf("	index : %ld\n" , ((long)((*stack)->index)));
		(*stack) = (*stack)->next;
	}
}

void ft_printstack_a_b_1(t_list *stack_a, t_list *stack_b)
{
	printf("---stack_a---\n");
	ft_printstack_1(stack_a);
	printf("---stack_b---\n");
	ft_printstack_1(stack_b);
}

void ft_printstack_a_b_2(t_list **stack_a, t_list **stack_b)
{
	printf("---stack_a---\n");
	ft_printstack_2(stack_a);
	printf("---stack_b---\n");
	ft_printstack_2(stack_b);
}
// void test_ft_printstack_a_b_1(t_list *stack_a, t_list *stack_b)
// {
// 	printf("entry\n");
// 	while (1)
// 	while (stack_a && stack_b)
// 	{
// 		printf("hello\n");
// 		printf("%ld\t%ld\n" , (*((long *)(stack_a->number))) ,  (*((long *)(stack_b->number)) ));
// 		stack_a = stack_a->next;
// 		stack_b = stack_b->next;
// 	}
// 	printf("stack_a\tstack_b");
// }
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
