/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:11:12 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/23 22:11:15 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	get_next_line(char **line)
{
	char	*buf;
	char	ch;
	int		i;

	i = 0;
	if (!line)
		return (-1);
	buf = malloc(4);
	if (!buf)
		return (-1);
	while ((read(0, &ch, 1)) > 0)
	{
		buf[i] = ch;
		if (buf[i] == '\n')
		{
			buf[i] = '\0';
			*line = buf;
			return (1);
		}
		i++;
	}
	buf[i] = '\0';
	*line = buf;
	free(buf);
	return (0);
}
