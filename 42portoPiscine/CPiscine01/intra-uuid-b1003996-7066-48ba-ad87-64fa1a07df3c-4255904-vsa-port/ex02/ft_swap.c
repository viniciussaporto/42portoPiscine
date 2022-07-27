/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:58:24 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/19 16:30:57 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	*swp1;
	int	*swp2;

	a = 100;
	b = 550;
	swp1 = &a;
	swp2 = &b;

	ft_swap(swp1, swp2);
	printf("%d", a);
	printf("%d", b);
	return (0);
}*/
