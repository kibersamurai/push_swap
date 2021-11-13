/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:35:19 by bprovolo          #+#    #+#             */
/*   Updated: 2021/11/13 19:11:32 by bprovolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_nums
{
	int				num;
	int				index;
	int				indicator;
	int				next_index;
	int				steps;
	int				first_i;
	int				first_step;
	int				temp_steps;
	struct s_nums	*next;
}	t_nums;

typedef struct s_swap
{
	t_nums		*a;
	t_nums		*b;
	t_nums		*temp;
	t_nums		init;
}	t_swap;

void	error_exit(t_swap *swap);
void	parser(t_swap *swap, int argc, char **argv);
void	indices(t_swap *swap);
void	pa(t_swap *swap, int i);
void	pb(t_swap *swap, int i);
void	ra(t_swap *swap, int i);
void	rb(t_swap *swap, int i);
void	rr(t_swap *swap, int i);
void	sa(t_swap *swap, int i);
void	sb(t_swap *swap, int i);
void	ss(t_swap *swap, int i);
void	rra(t_swap *swap, int i);
void	rrb(t_swap *swap, int i);
void	rrr(t_swap *swap, int i);
void	three_arg(t_swap *swap);
void	algorithm(t_swap *swap);
int		search(t_swap *swap, int index);
void	number_steps(t_swap *swap);
void	swap_st(t_swap *swap);
void	lst_free(t_nums *nums);
int		lst_size(t_nums *nums);
void	lst_clear(t_nums **nums);
t_nums	*lst_last(t_nums *nums);
void	lst_add_back(t_nums **nums, t_nums *new);
t_nums	*lst_new(int content);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
int		is_space(char s);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);

#endif