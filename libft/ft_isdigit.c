/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:22:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/01 17:53:07 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isdigit(int c)
// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	else
// 		return (0);
// }

// int	ft_isdigit(char *str)
// {
// 	int	i;

// 	i = 0;
// 	if(!str)
// 		return (0);
// 	while (str[i])
// 	{
// 		if (!(str[i] >= '0' && str[i] <= '9'))
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

int	ft_isdigit(char **str, int argc)
{
	int	i;
	int	j;

	i = 1;
	// if(!str)
	// 	return (0);
	while (i < argc)
	{
		// printf("Hello\n");
		j = 0;
		while (str[i][j])
		{
			// printf("i : %d\n",i);
			// printf("j : %d\n",j);
			// if (! (str[i][j] >= '0' && str[i][j] <= '9' && str[i][j] == 32) )
			if (! (str[i][j] >= '0' && str[i][j] <= '9') && !(str[i][j] == 32)
			&& !(str[i][j] == '-') && !(str[i][j] == '+'))
			{
				// printf("str[i][j] : %c\n", str[i][j]);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

// int	main(int argc, char **argv)
// {

// 	// char arr[5][5] = { { '0',' ', '2',' ' , '4' },
// 	// 					{ '1',' ', '2',' ' , '3' }
// 	// 				};

// 	printf("%d\n" ,ft_isdigit(argv,argc));

// }
