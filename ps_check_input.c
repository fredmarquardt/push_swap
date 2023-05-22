/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarquar <fmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:59:23 by fmarquar          #+#    #+#             */
/*   Updated: 2023/05/22 11:22:08 by fmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	input_to_long(int argc, char **argv);
bool	has_only_figures(int argc, char **argv);
bool	has_duplicates(int argc, char **argv);

bool	wrong_input(int argc, char **argv)
{
	if (argc == 0)
		return (true);
	if (input_to_long(argc, argv) == true)
		return (true);
	if (has_only_figures(argc, argv) == true)
		return (true);
	if (argc == 1)
		return (true);
	if (has_duplicates(argc, argv) == true)
		return (true);
	return (false);
}

bool	has_only_figures(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				write_error();
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

bool	has_duplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (i == j)
				j++;
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write_error();
				return (true);
			}
			j++;
		}
		i++;
	}
	return (false);
}

bool	input_to_long(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (ft_atol(argv[i]) > INT32_MAX || ft_atol(argv[i]) < INT32_MIN)
		{
			write_error();
			return (true);
		}
		i++;
	}
	return (false);
}
