/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:01:02 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/12 12:34:45 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stk *stk_a, t_stk *stk_b)
{
	if (stk_a->height >= 1)
	{
		stk_b->height++;
		stk_b->value[stk_b->height -1] = stk_a->value[stk_a->height -1];
		stk_b->pos[stk_b->height -1] = stk_a->pos[stk_a->height -1];
		stk_a->value[stk_a->height -1] = 0;
		stk_a->pos[stk_a->height -1] = 0;
		stk_a->height--;
	}
	ft_printf("pb\n");
	return ;
}

void	push_a(t_stk *stk_a, t_stk *stk_b)
{
	if (stk_b->height >= 1)
	{
		stk_a->height++;
		stk_a->value[stk_a->height -1] = stk_b->value[stk_b->height -1];
		stk_a->pos[stk_a->height -1] = stk_b->pos[stk_b->height -1];
		stk_b->value[stk_b->height -1] = 0;
		stk_b->pos[stk_b->height -1] = 0;
		stk_b->height--;
	}
	ft_printf("pa\n");
	return ;
}
