/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:03:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/09 16:52:15 by nkietwee         ###   ########.fr       */
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
	// int		number;
	void	*number;
	// long	*number;
	struct s_list	*next;
}t_list;

//check err

int	ft_check_arg(int argc, char **argv);
int	ft_check_ascending(long *res);
int ft_check_repeat(long *res);
int	ft_check_maxmin(long *res);

int	ft_count_len(int argc, char **argv);
int ft_countdigit(int argc, char **argv);
int ft_foundsym(char **str, int argc, char c);
long	*ft_addnum(int argc, char **argv, long *res);

//instruction
void	ft_ra(t_list **stack);
void	ft_rra(t_list **stack);

void	ft_sa(t_list **stack);
//sort
void ft_sortnumber(t_list **stack, int len);

void	sort_3(t_list **stack);

void	sort_5(t_list **stack);
void	ft_set_index(t_list **stack);

//linklist
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
#endif

