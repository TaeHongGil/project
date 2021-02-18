/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <sushin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:36:16 by sushin            #+#    #+#             */
/*   Updated: 2020/08/09 22:00:22 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	input_error(char *argv, int argc)
{
	int i;
	int count;
	int check;

	check = 0;
	if (argc != 2)
		return (1);
	i = 0;
	count = 0;
	while (argv[i] != '\0')
	{
		if ((argv[i] < '1' || argv[i] > '4') && argv[i] != 32)
			return (1);
		i++;
		count++;
	}
	if (count != 31)
		return (1);
	return (0);
}
