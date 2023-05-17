/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_huge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:31:28 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/17 16:33:48 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_radix(t_stk *stk_a, t_stk *stk_b)
{
	int	i;
	int	j;

	j = 0;
	while (stk_is_sorted(stk_a) == false)
	{
		i = 0;
		while (stk_a->top > i)
		{
			if (((stk_a->pos[stk_a->height - 1] >> j) & 1) == 1)
				push_b(stk_a, stk_b);
			else
				rotate_a(stk_a);
			i++;
		}
		while (stk_b->height >= 1)
			push_a(stk_a, stk_b);
		j++;
	}
}
