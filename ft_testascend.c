/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testascend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:12:19 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/11 20:55:50 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_setzero(t_list **stack)
{
	t_list *tmp;
	int	i;

	tmp = (*stack);
	i = 0;
	while(tmp)
	{
		(*stack) ->index = i;
		tmp = tmp->next;
	}
}

void ft_testascend(t_list  **stack, int len)
{
	(void)len;
	// printf("before sezero");
	ft_setzero(stack);

	// ft_printstack_2(stack);
	// exit(0);
	// t_list *tmp;
	t_list *num1;
	t_list *num2;
	int	i;
	int round;

	i = 1;
	round = 0;

	long tmp = -2147483648;
	long tmp2 = tmp;

	// tmp = (*stack);
	num1 = (*stack);
	// printf("num1 : %lu\n" , *((long *)num1->number));
	num2 = (*stack)->next;
	// printf("num2 : %lu\n" , *((long *)num2->number));
	// exit(0);
	printf("hello\n");
	while (i < len  )
	{
		// while (num1 && num2)
		// round = 0;
		while (round < len--)
		{
			round++;
			printf("round : %d\n" ,round);
			if (tmp >= tmp2 && num1->number < num2->number)
			{
				tmp = (long)num1->number;
				(*stack)->index = i;
				// printf("index : %d\n", ( ((int ) ((*stack)->index))));
				num1 = (*stack);
				num2 = (*stack)->next;
			}
			else
			{
				num1 = num1->next;
				num2 = num1->next;
			}
		}
		i++;
	}

}

/*
// int	main(void)
// {
// 	long	number1 = 10;
// 	long	number2 = -3;
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

// 	ft_testascend(a, 5);


// 	// printf(" bf : %d\n" , *((int *)a->number));
// 	while (a)
// 	{
// 		// printf(" before : %lu\n" , *((long *)a->number));
// 		printf(" bf : %ld\n" , *((long *)a->number));
// 		a = a->next;
// 	}

// 	// t_list *new;
// 	// new1  = ft_lstnew(a);
// 	// ft_lstadd_back();
}
*/
