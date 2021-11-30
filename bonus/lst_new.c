/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:19:14 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/23 22:02:31 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_nums	*lst_new(int content)
{
	t_nums	*the_new;

	the_new = (t_nums *)malloc(sizeof(t_nums));
	if (!the_new)
		return (NULL);
	the_new->num = content;
	the_new->next = NULL;
	return (the_new);
}
