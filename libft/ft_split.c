/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:36:56 by nkietwee          #+#    #+#             */
/*   Updated: 2023/08/18 18:44:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == '\0' || s[i] == c)
				count++;
		}
	}
	return (count);
}

static char	*ft_printword(char const *s, char c, size_t *start)
{
	size_t	i;
	size_t	len;
	char	*res;

	i = 0;
	len = 0;
	while (s[*start] == c)
		*start += 1;
	while (s[*start + len] != '\0' && s[*start + len] != c)
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		res[i] = s[*start + i];
		i++;
	}
	*start += len;
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	count;
	char	**ans;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	count = ft_countword(s, c);
	ans = (char **)malloc(sizeof(char *) * (count + 1));
	if (!ans)
		return (NULL);
	while (i < count)
	{
		ans[i] = ft_printword(s, c, &start);
		i++;
	}
	ans[i] = NULL;
	return (ans);
}
