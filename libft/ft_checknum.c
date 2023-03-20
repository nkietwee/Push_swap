/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:38:04 by nkietwee          #+#    #+#             */
/*   Updated: 2023/03/19 18:30:16 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checknum(char **str, int argc)
{
	int	i;
	int	j;

	i = 1;
	// if(!str)
	// 	return (0);
	while (i < argc)
	{
		j = 0;
		while (str[i][j])
		{
			if (! (str[i][j] >= '0' && str[i][j] <= '9') && !(str[i][j] == 32)
			&& !(str[i][j] == '-') && !(str[i][j] == '+'))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}


// int	ft_isdigit(char **str, int argc)
// {
// 	int	i;
// 	int	j;

// 	i = 1;
// 	// if(!str)
// 	// 	return (0);
// 	while (i < argc)
// 	{
// 		// printf("Hello\n");
// 		j = 0;
// 		while (str[i][j])
// 		{
// 			// printf("i : %d\n",i);
// 			// printf("j : %d\n",j);
// 			// if (! (str[i][j] >= '0' && str[i][j] <= '9' && str[i][j] == 32) )
// 			if (! (str[i][j] >= '0' && str[i][j] <= '9') && !(str[i][j] == 32)
// 			&& !(str[i][j] == '-') && !(str[i][j] == '+'))
// 			{
// 				// printf("str[i][j] : %c\n", str[i][j]);
// 				return (0);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

// int	main(int argc, char **argv)
// {

// 	// char arr[5][5] = { { '0',' ', '2',' ' , '4' },
// 	// 					{ '1',' ', '2',' ' , '3' }
// 	// 				};

// 	printf("%d\n" ,ft_isdigit(argv,argc));

// }
