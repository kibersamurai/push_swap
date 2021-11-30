/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:58:57 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/23 22:16:14 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	error_exit(t_swap *swap)
{	
	lst_clear(&swap->a);
	lst_clear(&swap->b);
	ft_putstr_fd("ERROR\n", 2);
	exit(1);
}

void	ko(t_swap *swap)
{	
	lst_clear(&swap->a);
	lst_clear(&swap->b);
	ft_putstr_fd("KO\n", 2);
	exit(1);
}
