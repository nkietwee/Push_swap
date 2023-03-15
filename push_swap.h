/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:03:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/15 02:06:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include"libft/libft.h"

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include <ctype.h> // isdigit
typedef struct s_list
{
	void	*number;
	int		index;
	// long	*number;
	struct s_list	*next;
}t_list;

//check err
int	ft_checknum(char **str, int argc);
int		ft_check_arg(int argc, char **argv);
// int		ft_check_ascending(int *res);
// int		ft_check_repeat(int *res);
// int		ft_check_maxmin(long *res);
int	ft_check_ascending(long *res);
int		ft_check_repeat(long *res);
int		ft_check_maxmin(long *res);

int		ft_count_len(int argc, char **argv);
int		ft_countdigit(int argc, char **argv);
int		ft_foundsym(char **str, int argc, char c);
long	*ft_addnum(int argc, char **argv, long *res);

void ft_printstack_1(t_list *stack);
void ft_printstack_2(t_list **stack);
void ft_createstack(long *res, t_list **stack, int len);

//instruction
void	ft_ra(t_list **stack);
void	ft_rb(t_list **stack);
void	ft_rra(t_list **stack);
void	ft_rrb(t_list **stack);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

void	ft_sa(t_list **stack);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);

//sort
void ft_sortnumber(t_list **stack, int len);

void	sort_3(t_list **stack);

void	sort_5(t_list **stack, int len);
void ft_ascend(t_list  **stack, int len);
void	ft_setzero(t_list **stack);

// void	ft_set_index(t_list **stack);
void	ft_ascending(t_list *stack);
void	ft_addindex(t_list *stack);


// void ft_testascend(t_list  **stack, int len);
// void	ft_setzero(t_list **stack);

//linklist
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
#endif

