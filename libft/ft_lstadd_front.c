/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:26:13 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/24 14:58:03 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"
#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
        if (!lst || !new)
                return ;
        new->next = *lst;
        *lst = new;
}

