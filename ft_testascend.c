/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testascend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:12:19 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 14:31:39 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_printstack_1(t_list *stack)
// {
// 	while (stack)
// 	{
// 		// printf("round\n");
// 		printf("%lu\n" , *((long *)(stack)->number));
// 		printf("	index : %d\n" , ((int)((stack)->index)));
// 		(stack) = (stack)->next;
// 	}
// 	// exit(0);
// }

void	ft_setzero(t_list **stack)
{
	t_list *tmp;
	int	i;

	tmp = (*stack);
	i = 0;
	while(tmp)
	{
		(tmp) ->index = i;
		tmp = tmp->next;
	}
}

void ft_testascend(t_list  **stack, int len)
{
	t_list *tmp;
	t_list *max;
	long num_tmp;

	ft_setzero(stack);
	if(!stack)
		return;
	while (len > 0 )
	{
		num_tmp = -2147483648;
		tmp = (*stack);
		while (tmp)
		{
			if (( *((long *)tmp->number) > num_tmp) && ( ((int)tmp->index) < len))
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

// void ft_testascend(t_list  **stack, int len)
// {
// 	(void)len;
// 	ft_setzero(stack);
// 	t_list *tmp;
// 	// t_list *max;
// 	t_list *min;

// 	long num_tmp;
// 	while (len > 0 )
// 	{
// 		num_tmp = 2147483647;
// 		tmp = (*stack);
// 		while (tmp)
// 		{
// 			if (( *((long *)tmp->number) < num_tmp) && ( ((int)tmp->index) > len))
// 			{
// 				min = tmp;
// 				num_tmp = *((long *)tmp->number);
// 			}
// 			tmp = tmp->next;
// 		}
// 		min->index = len;
// 		len--;
// 	}
// }

// int	main(void)
// {
// 	long	number1 = 10;
// 	long	number2 = 3;
// 	long	number3 = 23;
// 	long	number4 = 422;
// 	long	number5 = 51;

// 	t_list *a;
// 	t_list *b;
// 	t_list *c;
// 	t_list *d;
// 	t_list *e;

// 	a = malloc(sizeof(t_list));
// 	b = malloc(sizeof(t_list));
// 	c = malloc(sizeof(t_list));
// 	d = malloc(sizeof(t_list));
// 	e = malloc(sizeof(t_list));

// 	a->number =  &number1;
// 	a->next = b;

// 	b->number =  &number2;
// 	b->next = c;

// 	c->number =  &number3;
// 	c->next = d;

// 	d->number =  &number4;
// 	d->next = e;

// 	e->number =  &number5;
// 	e->next = NULL;

// 	ft_testascend(&a, 5);
// 	ft_printstack_1(a);


// }

