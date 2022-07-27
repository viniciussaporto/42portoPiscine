/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:06 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/16 16:53:20 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	l;
	int	c;

	c = 1;
	while (c <= y && x > 0)
	{
		l = 1;
		while (l <= x)
		{
			if ((l == 1 && c == 1) || (l == x && c == y && l != 1 && c != 1))
				ft_putchar('/');
			else if ((l == x && c == 1) || (l == 1 && c == y))
				ft_putchar('\\');
			else if ((l == 1) || (l == x) || (c == 1) || (c == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}
