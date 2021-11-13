/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_ss.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:55:11 by bprovolo          #+#    #+#             */
/*   Updated: 2021/09/26 17:56:01 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_swap *swap, int i)
{
	t_nums	*t;

	if (swap->a != NULL && swap->a->next != NULL)
	{
		t = swap->a;
		t = t->next;
		swap->temp = t;
		t = t->next;
		swap->a->next = t;
		swap->temp->next = swap->a;
		swap->a = swap->temp;
	}
	if (i == 1)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_swap *swap, int i)
{
	t_nums	*t;

	if (swap->b != NULL && swap->b->next != NULL)
	{
		t = swap->b;
		t = t->next;
		swap->temp = t;
		t = t->next;
		swap->b->next = t;
		swap->temp->next = swap->b;
		swap->b = swap->temp;
	}
	if (i == 1)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_swap *swap, int i)
{
	sa(swap, 0);
	sb(swap, 0);
	if (i == 1)
		ft_putstr_fd("ss\n", 1);
}
