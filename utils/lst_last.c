/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:12:45 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/13 18:42:08 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_nums	*lst_last(t_nums *nums)
{
	while (nums)
	{
		if (nums->next == NULL)
			break ;
		nums = nums->next;
	}
	return (nums);
}
