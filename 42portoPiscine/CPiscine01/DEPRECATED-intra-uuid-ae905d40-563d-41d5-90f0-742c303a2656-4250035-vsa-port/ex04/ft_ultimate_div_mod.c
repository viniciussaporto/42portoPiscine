/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:08:31 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/20 16:17:29 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a;
		mod = *b;
		*a = div / mod;
		*b = div % mod;
	}
}

/*int	main(void)
{
	int	div;
	int	mod;
	int	*tra;
	int	*trb;

	div = 42;
	mod = 10;
	tra = &div;
	trb = &mod;
	ft_ultimate_div_mod(tra, trb);
	printf("%d e %d", div, mod);
	return (0);
}*/
