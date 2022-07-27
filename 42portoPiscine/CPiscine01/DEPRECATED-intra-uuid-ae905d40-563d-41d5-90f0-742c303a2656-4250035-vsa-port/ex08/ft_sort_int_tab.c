/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:45:45 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/20 14:29:13 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = swap;
			}
			i++;
		}
		size--;
	}
}

/*int	main(void)
{
	int	n[5] = {3, 4, 5, 1, 2};
	int	*ptr = n;
	int	size;

	size = 5;
	ft_sort_int_tab(ptr, size);
	printf("%d, %d, %d, %d, %d\n", n[0], n[1], n[2], n[3], n[4]);
}*/
