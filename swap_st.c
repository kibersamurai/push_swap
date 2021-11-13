/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_st.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:38:45 by bprovolo          #+#    #+#             */
/*   Updated: 2021/10/02 20:26:14 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_st(t_swap *swap)
{
	t_nums	*temp_st;
	int		i;

	swap->temp = swap->b;
	while (swap->temp->index != swap->init.first_i)
		swap->temp = swap->temp->next;
	temp_st = swap->a;
	while (temp_st->index != swap->temp->next_index)
		temp_st = temp_st->next;
	if (temp_st->indicator == swap->temp->indicator)
	{
		if (temp_st->steps > swap->temp->steps)
			i = swap->temp->steps;
		else
			i = temp_st->steps;
		while (i--)
		{
			if (temp_st->indicator == 1)
				rr(swap, 1);
			else
				rrr(swap, 1);
		}
	}
}
