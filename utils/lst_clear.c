/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:00:26 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/13 18:42:01 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_clear(t_nums **nums)
{
	t_nums	*next;

	while (*nums)
	{
		next = (*nums)->next;
		lst_free(*nums);
		*nums = next;
	}
}
