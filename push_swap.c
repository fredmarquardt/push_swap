/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:32:15 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/16 16:55:22 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main2(int argc, char **argv)
{
	t_stk		*stk_a;
	t_stk		*stk_b;
	bool		arr;

	if (argc == 2)
		arr = true;
	if (argc == 1)
		return (0);
	argv = read_input(argc, argv);
	argc = count_input(argv);
	if (wrong_input(argc, argv) == true)
	{
		if (arr == true)
			free_array(argv);
		return (0);
	}
	stk_a = init_stk(argc);
	stk_b = init_stk(argc);
	fill_initial_stk(argc, argv, stk_a);
	add_order(stk_a);
	decide_sort_algo(stk_a, stk_b);
	if (arr == true)
		free_array(argv);
	free_stacks(stk_a, stk_b);
	return (0);
}

int	main(int argc, char **argv)
{
	main2(argc, argv);
	system("leaks push_swap");
}
