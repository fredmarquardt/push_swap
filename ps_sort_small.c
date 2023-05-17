/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:31:33 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/16 16:57:44 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stk *stk)
{
	if (stk_is_sorted(stk) == false)
		swap_a(stk);
}

void	sort3(t_stk *stk)
{
	const int	min = ((stk->pos[0] + stk->pos[1] + stk->pos[2] - 3) / 3);

	if (stk->pos[0] == min && stk->pos[1] == min + 2)
		return (swap_a(stk));
	if (stk->pos[0] == min + 2 && stk->pos[1] == min)
		return (r_rotate_a(stk));
	if (stk->pos[2] == min && stk->pos[1] == min + 1)
	{
		rotate_a(stk);
		swap_a(stk);
		return ;
	}
	if (stk->pos[0] == min + 1 && stk->pos[1] == min)
	{
		r_rotate_a(stk);
		swap_a(stk);
		return ;
	}
	if (stk->pos[0] == min + 1 && stk->pos[1] == min + 2)
		return (rotate_a(stk));
	if (stk_is_sorted(stk) == true)
		return ;
	return ;
}

void	sort5(t_stk *stk_a, t_stk *stk_b)
{
	while (stk_a->height >= 4)
	{
		if (stk_a->pos[stk_a->height - 1] >= 3)
			push_b(stk_a, stk_b);
		else
			rotate_a(stk_a);
	}
	sort3(stk_a);
	if (stk_b->pos[1] == 3)
	{
		push_a(stk_a, stk_b);
		push_a(stk_a, stk_b);
	}
	if (stk_b->pos[1] == 4)
	{
		rotate_b(stk_b);
		push_a(stk_a, stk_b);
		push_a(stk_a, stk_b);
	}
}
/* void	sort3(t_stk *stk)
{
	const int	min = ((stk->pos[0] + stk->pos[1] + stk->pos[2] - 3) / 3);

	if (stk_is_sorted(stk) == true)
		return ;
	if (stk->pos[0] == min && stk->pos[1] == min + 2)
		return (r_rotate_a(stk));
	if (stk->pos[0] == min + 2 && stk->pos[1] == min)
		return (swap_a(stk));
	if (stk->pos[0] == min && stk->pos[1] == min + 1)
	{
		rotate_a(stk);
		swap_a(stk);
		return ;
	}
	if (stk->pos[0] == min + 1 && stk->pos[1] == min)
		return (rotate_a(stk));
	if (stk->pos[0] == min + 1 && stk->pos[1] == min + 2)
	{
		r_rotate_a(stk);
		swap_a(stk);
		return ;
	}
	return ;
}
 */