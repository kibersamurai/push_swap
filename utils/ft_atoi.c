/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:59:59 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/13 19:08:43 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_space(char s)

{
	if (s == '\t' || s == '\n' || s == '\v' || s == '\f'
		|| s == '\r' || s == ' ')
		return (1);
	return (0);
}

int	is_digit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

int	ft_atoi(const char *str)
{
	long	i;
	long	int_max;
	int		neg;

	i = 0;
	neg = 1;
	int_max = 2147483647;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (is_digit(*str))
	{
		i = i * 10 + *str++ - '0';
		if ((i > int_max + 1 && neg == -1) || (i > int_max && neg == 1))
		{
			ft_putstr_fd("ERROR\n", 2);
			exit (1);
		}
	}
	return ((int)i * neg);
}