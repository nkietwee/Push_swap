/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:03:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:25:52 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include"libft.h"
# include"actions.h"
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>

typedef struct checksym
{
	int		i;
	int		j;
	int		k;
	char	**nbr;
}	t_sym;

typedef struct s_list
{
	void			*number;
	int				index;
	struct s_list	*next;
}	t_list;

//check err
int		ft_checknum(char **str, int argc);
void	ft_check_arg(int argc, char **argv);
int		ft_check_ascending(long long *res, int len);
void	ft_check_repeat(long long *res, int len);
int		ft_check_maxmin(long long *res, int len);
int		ft_count_len(int argc, char **argv);
int		ft_countdigit(int argc, char **argv);
int		ft_foundsym(char **str, int argc, char c);
void	ft_addnum(int argc, char **argv, long long *res);
t_list	*ft_createstack(long long *res, int len);
void	ft_checksym(int argc, char **argv, char c);

//sort
void	ft_sortnumber(t_list **stack_a, t_list *stack_b, int len);
void	sort_3(t_list **stack);
void	sort_5(t_list **stack_a, t_list *stack_b, int len);
void	ft_split_sort5(int len, t_list **stack_a, t_list **stack_b);
void	ft_push_stk_b(t_list **stack_a, t_list **stack_b, int *top, int *count);
void	ft_insidesplit(t_list **stack_a, t_list **stack_b, int len, int count);
void	ft_in_tostk_b(t_list **stack_a, t_list **stack_b, int len, int *count);
void	ft_rra_for_stacka(t_list **stack_a, int *top, int *len);
void	ft_ra_for_stacka(t_list **stack_a, int *top);

void	ft_ascend(t_list **stack, int len);
void	ft_setzero(t_list **stack);
void	ft_sortradix(t_list **stack_a, t_list **stack_b, int len);
int		ft_countbase2(int len);
void	ft_ascending(t_list *stack);
void	ft_addindex(t_list *stack);
void	ft_freestack(t_list **stack);
void	ft_dbfree(char **argv);

#endif
