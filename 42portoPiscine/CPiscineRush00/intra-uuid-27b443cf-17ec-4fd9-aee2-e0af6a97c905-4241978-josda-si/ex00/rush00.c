/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:08:06 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/16 12:04:17 by vsa-port         ###   ########.fr       */
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
			if ((l != 1 && l != x) && (c == 1 || c == y))
				ft_putchar('-');
			else if ((c != 1 && c != y) && (l == 1 || l == x))
				ft_putchar('|');
			else if ((l == 1) || (l == x) || (c == 1) || (c == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}
