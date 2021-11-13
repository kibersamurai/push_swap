/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 22:12:07 by bprovolo          #+#    #+#             */
/*   Updated: 2021/10/05 19:20:36 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sorting_index(int *index, int len)
{
	int	i;
	int	tmpswap;
	int	tmplen;

	tmplen = len;
	i = 0;
	while (len - 1)
	{
		if (index[i] > index[i + 1])
		{
			tmpswap = index[i];
			index[i] = index[i + 1];
			index[i + 1] = tmpswap;
			i = 0;
			len = tmplen;
		}
		else
		{
			++i;
			len--;
		}
	}
}

static void	indexing(int *index, t_swap *swap, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		swap->temp = swap->a;
		while (index[i] != swap->temp->num)
			swap->temp = swap->temp->next;
		swap->temp->index = i++;
	}
}

void	indices(t_swap *swap)
{
	int	*index;
	int	i;
	int	len;

	len = lst_size(swap->a);
	index = malloc(sizeof(int) * len);
	if (!index)
		error_exit(swap);
	swap->temp = swap->a;
	i = 0;
	while (swap->temp)
	{
		index[i++] = swap->temp->num;
		swap->temp = swap->temp->next;
	}
	sorting_index(index, len);
	indexing(index, swap, len);
	free(index);
}
