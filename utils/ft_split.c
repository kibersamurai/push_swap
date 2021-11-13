/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:49:25 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/13 18:45:43 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	st_count(char const *s, char c)

{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	st_len(char const *s, char c)

{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static void	*st_leak(char **temp, int words)

{
	int	i;

	i = 0;
	while (i < words)
	{
		free(temp[i]);
		i++;
	}
	free(temp);
	return (NULL);
}

static char	**st_fill(char const *s, int words, char c, char **temp)

{
	int	i;
	int	k;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = st_len(s, c);
		temp[i] = (char *)malloc(len + 1);
		if (!temp[i])
			return (st_leak(temp, i));
		k = 0;
		while (k < len)
			temp[i][k++] = *s++;
		temp[i][k] = '\0';
		i++;
	}
	temp[i] = NULL;
	return (temp);
}

char	**ft_split(char const *s, char c)

{
	char	**temp;
	int		words;

	if (!s)
		return (NULL);
	words = st_count(s, c);
	temp = (char **)malloc(sizeof(char *) * (words + 1));
	if (!temp)
		return (NULL);
	temp = st_fill(s, words, c, temp);
	return (temp);
}
