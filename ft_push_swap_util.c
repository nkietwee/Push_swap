/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_util.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:56:05 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/09 17:01:37 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_index(t_list **stack)
{
	t_list *tmp1;
	t_list *tmp2;
	long *temporary;

	tmp1 = (*stack);
	// printf("tmp1 :%d\n" , *((int *) tmp1->number));
	// exit(0);
	// tmp1 = tmp1->number;

	// tmp1 = (*stack)->number;

	tmp2 = (*stack)->next;
	// printf("tmp1 :%d\n" , *((int *) tmp2->number));
	// exit(0);
	while (tmp1 && tmp2)
	{
		if (tmp1->number > tmp2->number)
		{
			temporary = tmp1->number;
			tmp1->number = tmp2->number;
			tmp2->number = temporary;
			tmp1 = (*stack);
			tmp2 = tmp1->next;
			// ft_sa(stack);
		}
		else
		{
			tmp1 = tmp1->next;
			tmp2 = tmp1->next;
		}
	}
}
int	main(void)
{
	int	number1 = 1;
	int	number2 = 3;
	int	number3 = 2;
	int	number4 = 4;
	int	number5 = 5;

	t_list *a;
	t_list *b;
	t_list *c;
	t_list *d;
	t_list *e;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));
	d = malloc(sizeof(t_list));
	e = malloc(sizeof(t_list));

	a->number =  &number1;
	a->next = b;

	b->number =  &number2;
	b->next = c;

	c->number =  &number3;
	c->next = d;

	d->number =  &number4;
	d->next = e;

	e->number =  &number5;
	e->next = NULL;

	ft_set_index(&a);
	// printf(" bf : %d\n" , *((int *)a->number));
	while (a)
	{
		// printf(" before : %lu\n" , *((long *)a->number));
		printf(" bf : %d\n" , *((int *)a->number));
		a = a->next;
	}

	// t_list *new;
	// new1  = ft_lstnew(a);
	// ft_lstadd_back();
}

// void	ft_set_index(t_list **stack)
// {
// 	t_list *tmp1;
// 	t_list *tmp2;
// 	t_list *res; // result

// 	tmp1 = (*stack);
// 	tmp2 = (*stack)->next;
// 	while (tmp1)
// 	{
// 		if (tmp1 > tmp2)
// 		{
// 			res = tmp2;
// 			tmp2 = tmp1;
// 			tmp1 = res;
// 			tmp1 = (*stack);
// 		}
// 		else
// 			tmp1 = tmp1->next;

// 	}
// }

// void sort_int_tab(int *tab, int len)
// {
// 	int	i;
// 	int tmp;

// 	i = 0;
// 	// tab[i] = tab[0];
// 	while (i < len - 1)
// 	{
// 		if (tab[i] > tab[i + 1])
// 		{
// 			tmp = tab[i];
// 			tab[i] = tab[i + 1];
// 			tab[i + 1] = tmp;
// 			i = 0;
// 		}
// 		else
// 			i++;
// 	}
// }

// int main(void)
// {
// 	int *tab = malloc(sizeof(int ) * 10);
// 	tab[0] = 5;
// 	tab[1] = 2;
// 	tab[2] = 3;
// 	tab[3] = 9;
// 	tab[4] = 15;

// 	int	i = 0;
// 	sort_int_tab(tab, 5);
// 	while (i < 5)
// 	{
// 		printf(" tab[%d] : %d\n" ,i,tab[i]);
// 		i++;
// 	}


// }













