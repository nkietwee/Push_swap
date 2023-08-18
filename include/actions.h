/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:14:53 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:36:01 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACTIONS_H
# define ACTIONS_H

// # include "../libft/libft.h"
// # include "../include/push_swap.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list	t_list;

void	ft_ra(t_list **stack);
void	ft_rb(t_list **stack);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack);
void	ft_rrb(t_list **stack);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_sa(t_list **stack);
void	ft_sb(t_list **stack);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);

#endif
