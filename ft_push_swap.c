/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:29:36 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/30 21:39:30 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_addnum(int argc, char **argv, long long *res)
{
	int		i;
	int		j;
	int		k;
	char	**nbr;

	i = 1;
	k = 0;
	nbr = NULL;
	if ((ft_checknum(argv, argc) == 1)
		&& (ft_foundsym(argv, argc, '-') == 1)
		&& (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j] != NULL)
				res[k++] = ft_atoi(nbr[j++]);
			ft_dbfree(nbr);
			i++;
		}
	}
}

int	ft_count_len(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;
	char	**nbr;

	i = 1;
	len = 0;
	nbr = NULL;
	if ((ft_checknum(argv, argc) == 1)
		&& (ft_foundsym(argv, argc, '-') == 1)
		&& (ft_foundsym(argv, argc, '+') == 1))
	{
		while (argv[i])
		{
			j = 0;
			nbr = ft_split(argv[i], ' ');
			while (nbr[j++])
				len++;
			ft_dbfree(nbr);
			i++;
		}
	}
	else
		ft_putstr_fd("Error\n", 2);
	return (len);
}

int	main(int argc, char **argv)
{
	long long	*res;
	int			len;
	t_list		*stack_a;
	t_list		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	len = 0;
	ft_check_arg(argc, argv);
	ft_checksym(argc, argv, '+');
	ft_checksym(argc, argv, '-');
	len = ft_count_len(argc, argv);
	res = (long long *)malloc(sizeof(long long) * (len));
	if (!res)
		return (0);
	ft_addnum(argc, argv, res);
	ft_check_repeat(res, len);
	ft_check_maxmin(res, len);
	ft_check_ascending(res, len);
	stack_a = ft_createstack(res, len);
	ft_sortnumber(&stack_a, stack_b, len);
	free(res);
	ft_freestack(&stack_a);
	return (0);
}
