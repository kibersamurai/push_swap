/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:02:41 by bprovolo          #+#    #+#             */
/*   Updated: 2021/10/05 19:22:30 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search(t_swap *swap, int index)
{
	int	i;

	i = 1;
	while (swap->temp)
	{
		if (swap->temp->index == index + i)
		{
			i++;
			swap->temp = swap->b;
		}
		else
			swap->temp = swap->temp->next;
	}
	return (i);
}
