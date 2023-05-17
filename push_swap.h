/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:38:28 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/16 15:22:07 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <memory.h>
# include <stdbool.h>

typedef struct s_stk
{
	int			height;
	int			top;
	int			*pos;
	int			*value;
	char		name;
}t_stk;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

int		ft_atoi(const char *str);
long	ft_atol(const char *str);
bool	has_blanks(char *str);
int		count_blanks(char *str);
void	write_error(void);

void	push_a(t_stk *stk_a, t_stk *stk_b);
void	push_b(t_stk *stk_a, t_stk *stk_b);

void	swap_a(t_stk *stk);
void	swap_b(t_stk *stk);
void	swap_a_wop(t_stk *stk);
void	swap_b_wop(t_stk *stk);
void	swap_ab(t_stk *stk_a, t_stk *stk_b);

void	rotate_a(t_stk *stk);
void	rotate_b(t_stk *stk);
void	rotate_a_wop(t_stk *stk);
void	rotate_b_wop(t_stk *stk);
void	rotate_ab(t_stk *stk_a, t_stk *stk_b);
void	r_rotate_a(t_stk *stk);
void	r_rotate_b(t_stk *stk);
void	r_rotate_a_wop(t_stk *stk);
void	r_rotate_b_wop(t_stk *stk);
void	r_rotate_ab(t_stk *stk_a, t_stk *stk_b);

t_stk	*init_stk(int argc);
int		fill_initial_stk(int argc, char **argv, t_stk *stk);
char	**read_input(int argc, char **argv);
int		count_input(char **argv);

void	add_order(t_stk *stk);
void	decide_sort_algo(t_stk *stk_a, t_stk *stk_b);
bool	stk_is_sorted(t_stk *stk);

void	sort2(t_stk *stk);
void	sort3(t_stk *stk);
void	sort5(t_stk *stk_a, t_stk *stk_b);
void	sort_radix(t_stk *stk_a, t_stk *stk_b);

bool	wrong_input(int argc, char **argv);
void	free_stacks(t_stk *stk_a, t_stk *stk_b);
void	free_stk(t_stk *stk);
void	free_array(char **array);

void	print_stuff(t_stk *stk_a);
int		add_str_to_stack(int i, t_stk *stk, char *argv);

#endif