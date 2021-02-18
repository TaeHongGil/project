/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 15:34:00 by tgil              #+#    #+#             */
/*   Updated: 2020/08/09 15:40:23 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

int g_i;
int g_j;
int g_count;
int g_a;

int	cd_error(void)
{
	g_j = 0;
	while (g_j < 4)
	{
		g_i = 3;
		g_a = g_table[g_i][g_j];
		g_count = 1;
		g_i = 2;
		while (g_i >= 0)
		{
			if (g_a < g_table[g_i][g_j])
			{
				g_a = g_table[g_i][g_j];
				g_count++;
			}
			g_i--;
		}
		if (g_count == g_c_d[g_j])
		{
			g_i = 3;
			g_j++;
		}
		else
			return (0);
	}
	return (1);
}

int	cu_error(void)
{
	g_j = 0;
	while (g_j < 4)
	{
		g_i = 0;
		g_a = g_table[g_i][g_j];
		g_count = 1;
		g_i = 1;
		while (g_i < 4)
		{
			if (g_a < g_table[g_i][g_j])
			{
				g_a = g_table[g_i][g_j];
				g_count++;
			}
			g_i++;
		}
		if (g_count == g_c_u[g_j])
		{
			g_i = 0;
			g_j++;
		}
		else
			return (0);
	}
	return (1);
}

int	rl_error(void)
{
	g_i = 0;
	while (g_i < 4)
	{
		g_j = 0;
		g_a = g_table[g_i][g_j];
		g_count = 1;
		g_j = 1;
		while (g_j < 4)
		{
			if (g_a < g_table[g_i][g_j])
			{
				g_a = g_table[g_i][g_j];
				g_count++;
			}
			g_j++;
		}
		if (g_count == g_r_l[g_i])
		{
			g_j = 0;
			g_i++;
		}
		else
			return (0);
	}
	return (1);
}

int	rr_error(void)
{
	g_i = 0;
	while (g_i < 4)
	{
		g_j = 3;
		g_a = g_table[g_i][g_j];
		g_count = 1;
		g_j = 2;
		while (g_j >= 0)
		{
			if (g_a < g_table[g_i][g_j])
			{
				g_a = g_table[g_i][g_j];
				g_count++;
			}
			g_j--;
		}
		if (g_count == g_r_r[g_i])
		{
			g_j = 3;
			g_i++;
		}
		else
			return (0);
	}
	return (1);
}
