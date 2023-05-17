/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:49:27 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/16 16:33:01 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stk *stk_a, t_stk *stk_b)
{
	free_stk(stk_a);
	free_stk(stk_b);
	return ;
}

void	free_stk(t_stk *stk)
{
	if (!stk)
		return ;
	free(stk->pos);
	free(stk->value);
	free(stk);
	return ;
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
