/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_decide.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:18:32 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/22 10:51:04 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_order(t_stk *stk)
{
	int	smaller;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stk->height)
	{
		smaller = 1;
		while (j < stk->height)
		{
			if (stk->value[i] > stk->value[j])
				smaller++;
			j++;
		}
		stk->pos[i] = stk->height - smaller;
		j = 0;
		i++;
	}
}

void	decide_sort_algo(t_stk *stk_a, t_stk *stk_b)
{
	if (stk_is_sorted(stk_a) == true)
		return ;
	if (stk_a->height == 2)
		sort2(stk_a);
	if (stk_a->height == 3)
		sort3(stk_a);
	if (stk_a->height == 4 || stk_a->height == 5)
		sort5(stk_a, stk_b);
	if (stk_a->height > 5)
		sort_radix(stk_a, stk_b);
	return ;
}

bool	stk_is_sorted(t_stk *stk)
{
	int	i;

	i = 0;
	while (i < stk->height)
	{
		if (i != stk->pos[i])
			return (false);
		i++;
	}
	return (true);
}
