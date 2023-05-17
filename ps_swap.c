/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:40:39 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/16 09:36:27 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stk *stk)
{
	const int	temp_value = stk->value[stk->height - 1];
	const int	temp_pos = stk->pos[stk->height -1];

	if (stk->height >= 2)
	{
		stk->value[stk->height -1] = stk->value[stk->height - 2];
		stk->pos[stk->height -1] = stk->pos[stk->height - 2];
		stk->value[stk->height - 2] = temp_value;
		stk->pos[stk->height - 2] = temp_pos;
	}
	ft_printf("sa\n");
	return ;
}

void	swap_b(t_stk *stk)
{
	const int	temp_value = stk->value[stk->height - 1];
	const int	temp_pos = stk->pos[stk->height -1];

	if (stk->height >= 2)
	{
		stk->value[stk->height -1] = stk->value[stk->height - 2];
		stk->pos[stk->height -1] = stk->pos[stk->height - 2];
		stk->value[stk->height - 2] = temp_value;
		stk->pos[stk->height - 2] = temp_pos;
	}
	ft_printf("rb\n");
	return ;
}

void	swap_ab(t_stk *stk_a, t_stk *stk_b)
{
	swap_a_wop(stk_a);
	swap_b_wop(stk_b);
	ft_printf("ss\n");
	return ;
}

void	swap_b_wop(t_stk *stk)
{
	const int	temp_value = stk->value[stk->height - 1];
	const int	temp_pos = stk->pos[stk->height -1];

	if (stk->height >= 2)
	{
		stk->value[stk->height -1] = stk->value[stk->height - 2];
		stk->pos[stk->height -1] = stk->pos[stk->height - 2];
		stk->value[stk->height - 2] = temp_value;
		stk->pos[stk->height - 2] = temp_pos;
	}
	return ;
}

void	swap_a_wop(t_stk *stk)
{
	const int	temp_value = stk->value[stk->height - 1];
	const int	temp_pos = stk->pos[stk->height -1];

	if (stk->height >= 2)
	{
		stk->value[stk->height -1] = stk->value[stk->height - 2];
		stk->pos[stk->height -1] = stk->pos[stk->height - 2];
		stk->value[stk->height - 2] = temp_value;
		stk->pos[stk->height - 2] = temp_pos;
	}
	return ;
}
