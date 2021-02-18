/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overlap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <sushin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:29:45 by sushin            #+#    #+#             */
/*   Updated: 2020/08/09 20:52:45 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

int	overlap(void)
{
	int	x;
	int	y;
	int	n;

	n = 0;
	while (n < 4)
	{
		x = 0;
		while (x < 4)
		{
			y = x + 1;
			while (y < 4)
			{
				if (g_table[n][x] == g_table[n][y])
					return (0);
				if (g_table[x][n] == g_table[y][n])
					return (0);
				y++;
			}
			x++;
		}
		n++;
	}
	return (1);
}
