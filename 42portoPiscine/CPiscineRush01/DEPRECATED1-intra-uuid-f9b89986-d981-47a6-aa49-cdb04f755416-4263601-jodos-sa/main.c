/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:28:48 by jodos-sa          #+#    #+#             */
/*   Updated: 2022/07/24 15:41:20 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "errors.h"
#include "val.h"

void	fill_board(int board[4][4], char *info)
{
	unsigned int	i;
	unsigned int	info_size;

	i = 0;
	info_size = ft_strlen(info);
	while (i < (info_size / 2) + 1)
	{
		board[i / 4][i % 4] = info[i * 2] - '0';
		i++;
	}
}

int	can_place(int number, int puzz[4][4], int cl, int cc)
{
	int	st;
	int	nd;

	st = -1;
	while (++st < cl)
		if (puzz[st][cc] == number)
			return (0);
	nd = -1;
	while (++nd < cc)
		if (puzz[cl][nd] == number)
			return (0);
	return (1);
}

int	is_solved(int puzz[4][4], int board[4][4])
{
	int	is_top_valid;
	int	is_bot_valid;
	int	is_left_valid;
	int	is_right_valid;

	is_top_valid = val_top_bot(puzz, board[0]);
	is_bot_valid = val_bot_top(puzz, board[1]);
	is_left_valid = val_left_right(puzz, board[2]);
	is_right_valid = val_right_left(puzz, board[3]);
}

int	fill_puzz(int puzz[4][4], int board[4][4])
{
	int	cl;
	int	cc;
	int	n;
	int	placed;
	int	cb;

	placed = 0;
	cb = 0;
	cl = 0;
	cc = 0;
	while (cl < 4)
	{
		cc = 0;
		while (cc < 4)
		{
			placed = 0;
			if (cb)
				n = puzz[cl][cc];
			else
				n = 0;
		}
		while (++n < 5)
		{
			if (can_place(n, puzz, cl, cc))
			{
				puzz[cl][cc] = n;
				placed = 1;
				break ;
			}
			if (!placed)
			{
				if (cc == 0 && cl == 0)
					return (0);
				if (cc == 0)
				{
					cc = 3;
					cl--;
				}
				else
				{
					cc--;
				}
				cb = 1;
			}
		}
		else if (cc == 3 && cl == 3)
		{
			printf("nova matriz:\n");
			if (is_solved(puzz, board))
				return (1);
			else
			{
				if (cc == 0)
				{
					cc = 3;
					cl--;
				}
				else
					cc--;
				cb = 1;
			}
			else
			{
				cb = 0;
				cc++;
			}
		}
		cb = 0;
		cl++;
	}
}

int	main(int argc, char *argv[])
{
	int	board[4][4];
	int	puzz[4][4];
	char	*info;

	if (argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}

	info = argv[1];
	if (!ft_valid(info));
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}

	fill_board(board, info);
	if (!board_val(board))
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}
}
