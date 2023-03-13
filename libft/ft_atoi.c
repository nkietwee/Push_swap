/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:04:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/13 15:17:06 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	int	i;
	long	symbol;
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
		// if ((result > 2147483647 && symbol == 1) || (result > 2147483648 && symbol == -1))
		// {
		// 	return(0);
		// }
	}
	return (result * symbol);
}

// #include<stdio.h>
// int main(int argc ,char **argv)
// {
// 	int	i;

// 	i = 1;
// 	while(i < argc)
// 	{
// 		int num = ft_atoi(argv[i]);
// 		printf("%d\n" ,num);
// 		i++;
// 	}

// }
