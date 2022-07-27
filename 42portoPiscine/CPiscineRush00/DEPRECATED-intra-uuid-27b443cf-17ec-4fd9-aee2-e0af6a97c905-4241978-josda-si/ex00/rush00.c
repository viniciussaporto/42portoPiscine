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
	int	l;//declare 2 ints to build conditions
	int	c;//for ease of reading l for line(x) and c for column(y)

	c = 1;//so that it feed while loop with a value until it closes, while its 'true' loops continues, when its 'false' loop stops
	while (c <= y && x > 0)//while c less or equal than y the while loop works &&(and) x greater than 0 loop works too
	{
		l = 1;//so that it feeds the while loop until it closes, while its 'true' loops continues, when its 'false' loop stops
		while (l <= x)//while l less or equal than x the while loop works
		{
			if ((l != 1 && l != x) && (c == 1 || c == y))//here we accrue conditions to write or not the next char ('-'), last condition specifies that the char can only be written with if its neither first nor last in the line, it can only be written in between these. //being both of the statements true it continues and writes the char, otherwise it goes to next statement
				ft_putchar('-');//calls write function present in ft_putchar.c
			else if ((c != 1 && c != y) && (l == 1 || l == x))//same as statement above, but for columns
				ft_putchar('|');
			else if ((l == 1) || (l == x) || (c == 1) || (c == y))// same as statements above, but this has to attend only to one condition: either being first or last in its line/column to be written
				ft_putchar('o');
			else//if none of the statements above are attended it writes ' '.
				ft_putchar(' ');
			l++;//so it add +1 to int l, only works until l is equal to x, then it stops
		}
		ft_putchar('\n');//prints new line for the loop
		c++;//adds +1 to c until c is equal to y, then it stops
	}
}
