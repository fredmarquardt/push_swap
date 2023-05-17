/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_r_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:41:41 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/16 09:31:23 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_a(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[0];
	const int	temp_pos = stk->pos[0];

	i = 0;
	if (stk->height >= 2)
	{
		while (i < stk->height - 1)
		{
			stk->value[i] = stk->value[i + 1];
			stk->pos[i] = stk->pos[i + 1];
			i++;
		}
		stk->value[stk->height - 1] = temp_value;
		stk->pos[stk->height - 1] = temp_pos;
	}
	ft_printf("rra\n");
	return ;
}

void	r_rotate_b(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[0];
	const int	temp_pos = stk->pos[0];

	i = 0;
	if (stk->height >= 2)
	{
		while (i < stk->height - 1)
		{
			stk->value[i] = stk->value[i + 1];
			stk->pos[i] = stk->pos[i + 1];
			i++;
		}
		stk->value[stk->height - 1] = temp_value;
		stk->pos[stk->height - 1] = temp_pos;
	}
	ft_printf("rrb\n");
	return ;
}

void	r_rotate_ab(t_stk *stk_a, t_stk *stk_b)
{
	r_rotate_a_wop(stk_a);
	r_rotate_b_wop(stk_b);
	ft_printf("rrr\n");
	return ;
}

void	r_rotate_b_wop(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[0];
	const int	temp_pos = stk->pos[0];

	i = 0;
	if (stk->height >= 2)
	{
		while (i < stk->height - 1)
		{
			stk->value[i] = stk->value[i + 1];
			stk->pos[i] = stk->pos[i + 1];
			i++;
		}
		stk->value[stk->height - 1] = temp_value;
		stk->pos[stk->height - 1] = temp_pos;
	}
	return ;
}

void	r_rotate_a_wop(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[0];
	const int	temp_pos = stk->pos[0];

	i = 0;
	if (stk->height >= 2)
	{
		while (i < stk->height - 1)
		{
			stk->value[i] = stk->value[i + 1];
			stk->pos[i] = stk->pos[i + 1];
			i++;
		}
		stk->value[stk->height - 1] = temp_value;
		stk->pos[stk->height - 1] = temp_pos;
	}
	return ;
}
