/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:25:42 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/26 17:00:38 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->number = content;
	new->next = NULL;
	// free(content);
	return (new); // return address
}
