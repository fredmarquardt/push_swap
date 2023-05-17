/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_imput_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:29:39 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/16 16:56:49 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stk	*init_stk(int argc)
{
	t_stk		*stk;
	int			i;
	int			*value;
	int			*pos;

	i = 0;
	stk = malloc(sizeof(t_stk));
	value = malloc(sizeof(int) * (argc + 1));
	pos = malloc(sizeof(int) * (argc +1));
	stk->top = 0;
	stk->value = value;
	stk->pos = pos;
	stk->height = 0;
	stk->name = '0';
	return (stk);
}

int	fill_initial_stk(int argc, char **argv, t_stk *stk)
{
	int	i;

	i = 0;
	while (argv[i] != NULL)
	{
		stk->value[i] = ft_atoi(argv[argc - i -1]);
		stk->height = ++i;
		stk->top = i;
	}
	stk->top = i--;
	return (0);
}

char	**read_input(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		return (argv);
	}
	if (argc > 2)
	{
		i = 0;
		while (argv[i + 1] != NULL)
		{
			argv[i] = argv[i + 1];
			i++;
		}
		argv[i] = NULL;
	}
	return (argv);
}

int	count_input(char **argv)
{
	int		i;

	i = 0;
	while (argv[i] != NULL)
		i++;
	return (i);
}
