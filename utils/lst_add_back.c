/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:08:49 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/13 18:41:56 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_add_back(t_nums **nums, t_nums *new)
{
	t_nums	*ptr;

	if (new == NULL)
		return ;
	else if (*nums == NULL || nums == NULL)
		*nums = new;
	else
	{
		ptr = lst_last(*nums);
		ptr->next = new;
	}
}
