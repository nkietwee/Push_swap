/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:04:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/29 12:31:51 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	int			i;
	long long	symbol;
	long long	result;

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
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * symbol);
}

// int main(void)
// {
// 	char nbr[] = "-123456789";
// 	// printf("%llu\n" , ft_atoi("-123"));
// 	printf("before : %s\n", nbr);
// 	printf("------------------\n");
// 	printf("after : %lld\n", ft_atoi(nbr));
// }
