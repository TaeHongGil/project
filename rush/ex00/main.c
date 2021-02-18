/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <sushin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:39:34 by sushin            #+#    #+#             */
/*   Updated: 2020/08/09 22:49:38 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "table.h"
#include "overlap.h"
#include "ft_check.h"
#include "input_error.h"

int		g_check = 0;

void	print(void)
{
	int		n;
	int		m;
	char	c;

	n = 0;
	while (n < 4)
	{
		m = 0;
		while (m < 4)
		{
			c = g_table[n][m] + '0';
			write(1, &c, 1);
			if (m == 3)
				break ;
			write(1, " ", 1);
			m++;
		}
		write(1, "\n", 1);
		n++;
	}
}

void	check_print(int i, int j, int x, int y)
{
	g_table[0] = g_q[i];
	g_table[1] = g_q[j];
	g_table[2] = g_q[x];
	g_table[3] = g_q[y];
	if (overlap())
		if (cd_error() && cu_error())
			if (rl_error() && rr_error())
			{
				g_check = 1;
				print();
			}
}

void	set_table(void)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	while (i++ < 24)
	{
		j = 0;
		while (j++ < 24)
		{
			x = 0;
			while (x++ < 24)
			{
				y = 0;
				while (y++ < 24)
				{
					check_print(i - 1, j - 1, x - 1, y - 1);
					if (g_check == 1)
						return ;
				}
			}
		}
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int n[4];

	i = 0;
	while (i++ < 4)
		n[i - 1] = i;
	if (input_error(argv[1], argc))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	permutation(n, 0, 3);
	i = 0;
	while (*argv[1] != '\0' && i++ != 4)
	{
		g_c_u[i - 1] = *argv[1] - '0';
		g_c_d[i - 1] = *(argv[1] + 8) - '0';
		g_r_l[i - 1] = *(argv[1] + 16) - '0';
		g_r_r[i - 1] = *(argv[1] + 24) - '0';
		argv[1]++;
		argv[1]++;
	}
	set_table();
	if (g_check == 0)
		write(1, "Error\n", 6);
}
