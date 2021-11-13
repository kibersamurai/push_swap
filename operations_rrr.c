/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rrr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:58:22 by bprovolo          #+#    #+#             */
/*   Updated: 2021/09/26 18:00:48 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_swap *swap, int i)
{
	t_nums	*t;
	int		size;

	if (swap->a != NULL && swap->a->next != NULL)
	{
		t = swap->a;
		swap->temp = lst_last(swap->a);
		size = lst_size(swap->a);
		while ((size - 2) != 0)
		{
			t = t-> next;
			--size;
		}
		t->next = NULL;
		swap->temp->next = swap->a;
		swap->a = swap->temp;
	}
	if (i == 1)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_swap *swap, int i)
{
	t_nums	*t;
	int		size;

	if (swap->b != NULL && swap->b->next != NULL)
	{
		t = swap->b;
		swap->temp = lst_last(swap->b);
		size = lst_size(swap->b);
		while ((size - 2) != 0)
		{
			t = t->next;
			--size;
		}
		t->next = NULL;
		swap->temp->next = swap->b;
		swap->b = swap->temp;
	}
	if (i == 1)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_swap *swap, int i)
{
	rra(swap, 0);
	rrb(swap, 0);
	if (i == 1)
		ft_putstr_fd("rrr\n", 1);
}
