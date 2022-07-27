/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:39:36 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/20 12:39:59 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
/*int	main(void)
{
	int	n[6] = {1, 2, 3, 4, 5, 6};
	int	*ptr = n;
	int	size = 6;

	ft_rev_int_tab(ptr, size);
	printf("%d %d %d %d %d %d\n", n[0], n[1], n[2], n[3], n[4], n[5]);

}*/
