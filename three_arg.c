/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 21:37:19 by bprovolo          #+#    #+#             */
/*   Updated: 2021/10/05 19:21:40 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_arg_algoritm(t_swap *swap)
{
	if (swap->a->num < swap->a->next->next->num
		&& swap->a->next->next->num < swap->a->next->num)
	{
		sa(swap, 1);
		ra(swap, 1);
	}
	if (swap->a->num > swap->a->next->num
		&& swap->a->num < swap->a->next->next->num)
		sa(swap, 1);
	if (swap->a->num < swap->a->next->num
		&& swap->a->num > swap->a->next->next->num)
		rra(swap, 1);
	if (swap->a->next->next->num > swap->a->next->num
		&& swap->a->next->next->num < swap->a->num)
		ra(swap, 1);
	if (swap->a->next->num < swap->a->num
		&& swap->a->next->num > swap->a->next->next->num)
	{
		sa(swap, 1);
		rra(swap, 1);
	}
}

void	three_arg(t_swap *swap)
{
	if (lst_size(swap->a) == 2)
	{
		if (swap->a->num > swap->a->next->num)
			sa(swap, 1);
	}
	else if (lst_size(swap->a) == 3)
		three_arg_algoritm(swap);
}
