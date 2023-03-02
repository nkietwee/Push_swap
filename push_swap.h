/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:03:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/02 20:34:52 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include"libft/libft.h"

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>


int ft_foundsym(char **str, int argc, char c);
int	ft_checkarg(int argc, char **argv);
int ft_countdigit(int argc, char **argv);
int ft_checkrepeat(long *res);
long	*ft_addnum(int argc, char **argv);
int	ft_checkarg(int argc, char **argv);
int	ft_checkascending(long *res);
int	ft_check_maxmin(long *res);

#endif

