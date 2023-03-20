/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/19 23:06:31 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// long *ft_addnum(int argc, char **argv, long *res)
void ft_addnum(int argc, char **argv, long *res)
{
	int i;
	int j;
	int k;
	char **nbr;
	// long *res;

	i = 1;
	j = 0;
	k = 0;
	// res = (long *)malloc(sizeof(long) * 20);
	// if (!res)
	// 	return (0);
	/* argc >= 2*/
	if ((ft_checknum(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j] != NULL)
			{
				res[k] = ft_atoi(nbr[j]);
				j++;
				k++;
			}
			i++;
		}
	}
	res[k] = '\0';
}

int ft_count_len(int argc, char **argv)
{
	int len;
	int i;
	int j;
	char **nbr;

	len = 0;
	i = 1;
	if ((ft_checknum(argv, argc) == 1) && (ft_foundsym(argv, argc, '-') == 1) && (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j])
			{
				// ans[len] = nbr[j];
				len++;
				j++;
			}
			i++;
		}
	}
	else
		ft_putstr_fd("Error aaaja" ,2);
	if (len < 2)
		exit(0);
	return (len);
}

int main(int argc, char **argv)
{
	long	*res;
	int		len;
	t_list	*stack=NULL;

	ft_check_arg(argc, argv);
	len = ft_count_len(argc, argv);
	res = (long *)malloc(sizeof(long) * (len + 1));
	if (!res)
		return (0);
	// res = ft_addnum(argc, argv ,res);
	ft_addnum(argc, argv ,res);
	ft_check_repeat(res);
	ft_check_ascending(res);
	// printf("%ld\n", res[0]);
	ft_check_maxmin(res);

	ft_createstack(res, &stack, len); //protect null?
	// if (len == 6)
	// 	ft_printstack_1(stack); // why I can't print zero

	ft_sortnumber(&stack, len);

	return (0);
}
