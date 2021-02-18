/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:11:26 by tgil              #+#    #+#             */
/*   Updated: 2020/08/09 17:12:42 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TABLE_H
# define TABLE_H

int	g_q[24][4];
int	*g_table[4];
int	g_c_u[4];
int	g_c_d[4];
int	g_r_l[4];
int	g_r_r[4];

void	swap(int *a, int *b);

void	permutation(int *array, int start, int end);

#endif
