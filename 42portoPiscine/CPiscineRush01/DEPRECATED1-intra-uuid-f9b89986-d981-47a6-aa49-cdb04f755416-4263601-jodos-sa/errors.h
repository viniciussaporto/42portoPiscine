/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:53:34 by jodos-sa          #+#    #+#             */
/*   Updated: 2022/07/24 15:58:03 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.h"

int	ft_valid(char *param)
{
	unsigned int	i;
	unsigned int	p_size;

	i = 0;
	p_size = ft_strlen(param);
	if (p_size != 31)
		return (1);
	while (i < p_size)
	{
		if (i % 2 == 0)
		{
			if (param[i] < '1' || param[i] > '4')
				return (1);
		}
		else if (param[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	board_val(int board[4][4])
{
	int	st;
	int	nd;

	st = 0;
	while (st < 4)
	{
		nd = 0;
		while (nd < 4)
		{
			if (board[st][nd] + board[st + 1][nd] < 3 ||
					board[st][nd] + board[st + 1][nd] > 5)
			{
				return (0);
			}
			nd++;
		}
		nd += 0;
	}
	return (1);
}
