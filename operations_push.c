/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:57:07 by bprovolo          #+#    #+#             */
/*   Updated: 2021/09/26 17:57:37 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_swap *swap, int i)
{
	t_nums	*t;

	if (swap->b != NULL)
	{
		t = swap->b;
		t = t->next;
		if (swap->a == NULL)
			swap->b->next = NULL;
		else
			swap->b->next = swap->a;
		swap->a = swap->b;
		swap->b = t;
	}
	if (i == 1)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_swap *swap, int i)
{
	t_nums	*t;

	if (swap->a != NULL)
	{
		t = swap->a;
		t = t->next;
		if (swap->b == NULL)
			swap->a->next = NULL;
		else
			swap->a->next = swap->b;
		swap->b = swap->a;
		swap->a = t;
	}
	if (i == 1)
		ft_putstr_fd("pb\n", 1);
}
