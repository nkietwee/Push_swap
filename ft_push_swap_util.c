/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_util.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:32:20 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/25 23:56:54 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_addindex(t_list *stack)
{
	t_list *tmp;
	int	i;

	tmp = stack;
	i = 1;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}

void	ft_ascending(t_list *stack)
{
	t_list *tmp1;
	t_list *tmp2;
	long *temporary;
	int	i;

	tmp1 = stack;
	tmp2 = stack->next;
	i = 1;
	while (tmp1 && tmp2)
	{
		if (tmp1->number > tmp2->number)
		{
			temporary = tmp1->number;
			tmp1->number = tmp2->number;
			tmp2->number = temporary;

			tmp1 = stack;
			tmp2 = tmp1->next;

		}
		else
		{
			tmp1 = tmp1->next;
			tmp2 = tmp1->next;
		}
	}
}

void ft_freestack(t_list **stack)
{
	t_list *tmp;

	tmp = (*stack);

	while((*stack))
	{
		tmp = (*stack);
		(*stack) = (*stack)->next;
		free(tmp->number);
		// free (*((int *)tmp->index));
		//
	}
	free(stack);
}

void ft_dbfree(char **argv)
{
	int	i;

	i = 0;
	while(argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);

}

// int	main()
// {
// 	int	number1 = -10;
// 	int	number2 = 6;
// 	int	number3 = 24;
// 	int	number4 = 5;
// 	int	number5 = 47;

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

// 	a->number =  number1;
// 	a->next = b;

// 	b->number =  number2;
// 	b->next = c;

// 	c->number =  number3;
// 	c->next = d;

// 	d->number =  number4;
// 	d->next = e;

// 	e->number =  number5;
// 	e->next = NULL;

// 	ft_ascending(a);
// 	ft_addindex(a);
// 	while (a)
// 	{
// 		printf(" value bf : %d\n" , a->number);
// 		printf(" 				indexbf : %d\n" , a->index);
// 		a = a->next;
// 	}
// }
