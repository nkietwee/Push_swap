/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:06:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/19 18:48:31 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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

void ft_ascend(t_list  **stack, int len)
{
	t_list *tmp;
	t_list *max;
	long num_tmp;

	if(!stack)
		return;
	ft_setzero(stack);
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
// 2 3 -4 0 -1
void sort_5(t_list **stack_a,t_list *stack_b,  int len)
{
	int	count;
	int	top;
	int	round;
	t_list *tmp_a;
	t_list *tmp_b;

	count = len;
	top = 1;
	tmp_a = (*stack_a);
	tmp_b = stack_b;
	ft_ascend(&tmp_a, len);

	// ft_printstack_2(&tmp_a);
	// exit(0);
	while (count >= 3)
	{
		tmp_a = (*stack_a);
		tmp_b = stack_b;
		top = 1;
		while (tmp_a && top <= len)
		{
			if (( ((int)(tmp_a)->index ) <= len / 2 ) && (top == 1 || top == 2))
			{
					ft_pb(stack_a, &stack_b);
				tmp_a = (*stack_a);
				top++;
				count--;
			}
			else if (( ((int)(tmp_a)->index ) <= len / 2 ) && (top == 3 ||top == 4 || top == 5 ))
			{
				round = top - 1;
				if (round < len)
				{
					tmp_a = (*stack_a);
					ft_rra(stack_a);
					round++;
				}
				top++;
			}
			else
			{
				top++;
				tmp_a = tmp_a->next;
			}
		}
		// (*stack_a) = tmp_a;
		// stack_b = tmp_b;
		if (count == 3)
		{
			tmp_a = (*stack_a);
			tmp_b = stack_b;
			break;
		}

	}
	while (count > 1)
	{
		if ( ((int)(tmp_b)->index )  < ((int)(tmp_b)->next->index ))
			ft_sb(&stack_b);
		// ft_printstack_a_b_1((*stack_a), stack_b);
		// exit(0);
		count--;

		sort_3(stack_a);
		/*Why It should in while loop*/
		ft_pa(stack_a, &stack_b);
		ft_pa(stack_a, &stack_b);
		ft_printstack_a_b_1(*stack_a, stack_b);
		exit(0);
		// printf("stack_a\n");
		// 	ft_printstack_2(&tmp_a);
		// printf("stack_b\n");
		// 	ft_printstack_2(&tmp_b);
		// exit(0);
	}
	// ft_pa(stack_a, &stack_b);
	// ft_pa(stack_a, &stack_b);
	ft_printstack_a_b_1(*stack_a, stack_b);
	exit(0);
}
// void sort_5(t_list **stack_a, int len)
// {
// 	int	count;
// 	int	top;
// 	int	bot;
// 	t_list *tmp_a;
// 	t_list *tmp_b;
// 	t_list *stack_b=NULL;

// 	count = len;
// 	top = 1;
// 	bot = len;
// 	tmp_a = (*stack_a);
// 	tmp_b = stack_b;
// 	ft_ascend(&tmp_a, len);

// 	// ft_printstack_2(&tmp_a);
// 	// exit(0);
// 	// printf("bot : %d\n" , bot);
// 	while (count >= 3)
// 	{
// 		tmp_a = (*stack_a);
// 		tmp_b = stack_b;
// 		while (tmp_a)
// 		{

// 			if (( ((int)(tmp_a)->index ) <= len / 2 ) && (top == 1 || top == 2))
// 			{
// 				// ft_pb(&tmp_a, &tmp_b);
// 				ft_pb(stack_a, &stack_b);
// 				ft_printstack_a_b_1(*stack_a, stack_b);
// 				printf("index : %d\n" ,(int)(tmp_a)->index );
// 				// tmp_a = tmp_a->next;
// 				tmp_a = (*stack_a);
// 				// exit(0);
// 				top++;
// 				count--;
// 			}
// 			else if (( ((int)(tmp_a)->index ) <= len / 2 ) && (bot == 4 || bot == 5 ))
// 			{
// 				// ft_rra(stacj_a);
// 				ft_rra(stack_a);
// 				bot--;
// 			}
// 			else
// 			{
// 				printf("-----------------------move stack\n");
// 				tmp_a = tmp_a->next;
// 			}
// 			// if (count == 3 || tmp_a == NULL)
// 			if (count == 3)
// 			{
// 				// printf("inner count = 3\n");
// 				// tmp_a = (*stack_a);
// 				// sort_3(&tmp_a); // seg fault
// 				// ft_printstack_a_b_1(tmp_a, tmp_b);
// 				break;
// 			}
// 			// ft_printstack_a_b_1((*stack_a), stack_b);
// 			// ft_printstack_a_b_1(tmp_a, tmp_b);
// 			printf("---------------------------------------------------\n");
// 			printf("top : %d\n" ,top);
// 			printf("bot : %d\n" ,bot);
// 			printf("count : %d\n" ,count);
// 			printf("---------------------------------------------------\n");
// 		}
// 		// (*stack_a) = tmp_a;
// 		// stack_b = tmp_b;
// 		if (count == 3)
// 		{
// 			printf("count = 3\n");
// 			break;
// 		}
// 	}
// 	printf("count after break : %d\n" , count);
// 			ft_printstack_a_b_1(tmp_a, tmp_b);
// 	exit(0);
// 	while (count > 1)
// 	{
// 		if (  *((long *)tmp_b->number)  <  *((long *)tmp_b->next->number))
// 			ft_sb(&tmp_b);
// 		// exit(0);
// 		count--;
// 		// sort_3(tmp_a);
// 		// printf("stack_a\n");
// 		// 	ft_printstack_2(&tmp_a);
// 		// printf("stack_b\n");
// 		// 	ft_printstack_2(&tmp_b);
// 		// exit(0);
// 	}
// 	ft_pa(stack_a, &tmp_b);
// 	ft_pa(stack_a, &tmp_b);


// 	printf("stack_a\n");
// 			ft_printstack_2(&tmp_a);
// 	printf("stack_b\n");
// 			ft_printstack_2(&tmp_b);
// 	exit(0);
// }
void test_sort6(t_list **stack_a, int len)
{
	t_list *tmp_a;
	t_list *tmp_b;
	t_list *stack_b=NULL;
	int	top;
	int	i;

	tmp_a = (*stack_a);
	tmp_b = stack_b;
	top = 1;
	i = len;
	// ft_printstack_1(tmp_a);
	// exit(0);
	while (i > 3)
	{
		// printf("---test rra---\n");
		ft_pb(&tmp_a , &tmp_b);
		ft_pb(&tmp_a , &tmp_b);
		ft_pb(&tmp_a , &tmp_b);
		ft_pb(&tmp_a , &tmp_b);
		ft_ss(&tmp_a , &tmp_b);
		// ft_rrb(&tmp_b);
		// ft_rrr(&tmp_a ,&tmp_b);
		printf("---stack a---\n");
		ft_printstack_1(tmp_a);
		printf("---stack b---\n");
		ft_printstack_1(tmp_b);
		exit(0);
		if (( ((int)tmp_a->index ) <= len / 2 ) && (top == 1 || top == 2 ))
		{
			ft_sa(&tmp_a);
			ft_printstack_1(tmp_a);
			exit(0);
		}
			// ft_rra(tmp_a, tmp_b);

	}
}
