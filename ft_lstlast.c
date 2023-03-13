/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:17:21 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 16:19:32 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	if (!lst)
		return (0);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return(tmp);
}
