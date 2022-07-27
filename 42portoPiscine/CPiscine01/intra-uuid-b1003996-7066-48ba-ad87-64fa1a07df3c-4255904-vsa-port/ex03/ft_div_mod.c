/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:38:07 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/19 17:07:11 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	*tra;
	int	*trb;

	a = 20;
	b = 10;
	tra = &a;
	trb = &b;
	ft_div_mod(a, b, tra, trb);
	printf("%d e %d", *tra, *trb);
	return (0);
}*/
