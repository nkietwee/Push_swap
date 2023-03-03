/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:03:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/03 11:51:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include"libft/libft.h"

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>


int	ft_check_arg(int argc, char **argv);
int	ft_check_ascending(long *res);
int ft_check_repeat(long *res);
int	ft_check_maxmin(long *res);

int	ft_count_len(int argc, char **argv);
int ft_countdigit(int argc, char **argv);
int ft_foundsym(char **str, int argc, char c);
long	*ft_addnum(int argc, char **argv);

#endif

