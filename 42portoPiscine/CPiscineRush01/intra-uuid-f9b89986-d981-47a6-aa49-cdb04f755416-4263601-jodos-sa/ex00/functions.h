/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vribeiro <vribeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:37:03 by psergio-          #+#    #+#             */
/*   Updated: 2022/07/24 21:04:54 by jodos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

unsigned int	ft_strlen(char *str);
int				ft_valid(char *str);
int				board_val(int board[4][4]);
int				val_top_bot(int matriz[4][4], int colXup[4]);
int				val_bot_top(int matriz[4][4], int colXdown[4]);
int				val_left_right(int matriz[4][4], int rowXleft[4]);
int				val_right_left(int matriz[4][4], int rowXright[4]);
void			fill_board(int board[4][4], char *info);
void			print_puzz(int puzz[4][4]);
int				is_solved(int puzz[4][4], int board[4][4]);
int				can_place(int puzz[4][4], int cl, int cc, int n);
void			reuse(int cb, int cc);

#endif
