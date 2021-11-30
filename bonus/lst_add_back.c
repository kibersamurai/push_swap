/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:08:49 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/23 23:05:11 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	lst_add_back(t_nums **nums, t_nums *newl)
{
	t_nums	*ptr;

	if (newl == NULL)
		return ;
	else if (*nums == NULL || nums == NULL)
		*nums = newl;
	else
	{
		ptr = lst_last(*nums);
		ptr->next = newl;
	}
}
