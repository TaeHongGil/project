/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <sushin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:33:19 by sushin            #+#    #+#             */
/*   Updated: 2020/08/09 18:09:23 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_q[24][4];
int g_i = 0;

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	permutation(int *array, int start, int end)
{
	int i;

	if (start == end)
	{
		i = 0;
		while (i < 4)
		{
			g_q[g_i][i] = array[i];
			i++;
		}
		g_i++;
	}
	else
	{
		i = start;
		while (i <= end)
		{
			swap(&array[start], &array[i]);
			permutation(array, start + 1, end);
			swap(&array[start], &array[i]);
			i++;
		}
	}
}
