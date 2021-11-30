/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:34:30 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/28 19:23:19 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r_down(t_swap *swap)
{
	while (swap->temp->index != 0)
	{
		ra(swap, 1);
		swap->temp = swap->a;
	}
}

static void	sorting(t_swap *swap)
{
	int	i;
	int	size;

	i = 0;
	size = lst_size(swap->a);
	swap->temp = swap->a;
	while (swap->temp->index != 0)
	{
		swap->temp = swap->temp->next;
		++i;
	}
	swap->temp = swap->a;
	while (i > size / 2 + size % 2)
	{
		while (swap->temp->index != 0)
		{
			rra(swap, 1);
			swap->temp = swap->a;
		}
		return ;
	}
	r_down(swap);
}

static void	init_struct(t_swap *swap)
{
	swap->a = NULL;
	swap->b = NULL;
	swap->temp = NULL;
}

static void	sorted(t_swap *swap)
{
	swap->temp = swap->a;
	if (swap->temp->index == 0)
	{
		while (swap->temp->next != NULL)
		{
			if (swap->temp->index + 1 == swap->temp->next->index)
				swap->temp = swap->temp->next;
			else
				return ;
		}
		lst_clear(&swap->a);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	t_swap	swap;
	int		size_a;

	if (argc == 1)
		return (0);
	init_struct(&swap);
	parser(&swap, argc, argv);
	if (lst_size(swap.a) <= 3)
		three_arg(&swap);
	size_a = lst_size(swap.a);
	if (size_a > 3)
	{	
		indices(&swap);
		swap.temp = swap.a;
		sorted(&swap);
		algorithm(&swap);
		sorting(&swap);
	}
	lst_clear(&swap.a);
	return (0);
}
