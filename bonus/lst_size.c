/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:46:04 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/23 22:02:34 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	lst_size(t_nums *nums)
{
	int	n;

	n = 0;
	while (nums)
	{
		++n;
		if (nums->next == NULL)
			break ;
		nums = nums -> next;
	}
	return (n);
}
