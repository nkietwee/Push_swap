/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:04:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/02 21:09:12 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	int	i;
	int	symbol;
	long	result;

	i = 0;
	symbol = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		i++;
		symbol = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 +(str[i] - '0');
		i++;
	}
	return (result * symbol);
}

/*
int main(int argc ,char **argv)
{
	int	i;

	i = 1;
	while(i < argc)
	{
		long num = ft_atoi(argv[i]);
		printf("%ld\n" ,num);
		i++;
	}

}*/
