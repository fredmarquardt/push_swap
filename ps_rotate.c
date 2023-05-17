/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:41:41 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/12 12:51:08 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[stk->height -1];
	const int	temp_pos = stk->pos[stk->height -1];

	i = 1;
	if (stk->height >= 2)
	{
		while (i < stk->height)
		{
			stk->value[stk->height - i] = stk->value[stk->height - i - 1];
			stk->pos[stk->height - i] = stk->pos[stk->height - i - 1];
			i++;
		}
		stk->value[0] = temp_value;
		stk->pos[0] = temp_pos;
	}
	ft_printf("ra\n");
	return ;
}

void	rotate_b(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[stk->height];
	const int	temp_pos = stk->pos[stk->height];

	i = 0;
	if (stk->height >= 2)
	{
		while (i < stk->height)
		{
			stk->value[stk->height - i] = stk->value[stk->height - i - 1];
			stk->pos[stk->height - i] = stk->pos[stk->height - i - 1];
			i++;
		}
		stk->value[1] = temp_value;
		stk->pos[1] = temp_pos;
	}
	ft_printf("rb\n");
	return ;
}

void	rotate_ab(t_stk *stk_a, t_stk *stk_b)
{
	rotate_a(stk_a);
	rotate_b(stk_b);
	ft_printf("rr\n");
	return ;
}

void	rotate_b_wop(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[stk->height];
	const int	temp_pos = stk->pos[stk->height];

	i = 0;
	if (stk->height >= 2)
	{
		while (i < stk->height)
		{
			stk->value[stk->height - i] = stk->value[stk->height - i - 1];
			stk->pos[stk->height - i] = stk->pos[stk->height - i - 1];
			i++;
		}
		stk->value[1] = temp_value;
		stk->pos[1] = temp_pos;
	}
	return ;
}

void	rotate_a_wop(t_stk *stk)
{
	int			i;
	const int	temp_value = stk->value[stk->height];
	const int	temp_pos = stk->pos[stk->height];

	i = 0;
	if (stk->height >= 2)
	{
		while (i < stk->height)
		{
			stk->value[stk->height - i] = stk->value[stk->height - i - 1];
			stk->pos[stk->height - i] = stk->pos[stk->height - i - 1];
			i++;
		}
		stk->value[1] = temp_value;
		stk->pos[1] = temp_pos;
	}
	return ;
}
