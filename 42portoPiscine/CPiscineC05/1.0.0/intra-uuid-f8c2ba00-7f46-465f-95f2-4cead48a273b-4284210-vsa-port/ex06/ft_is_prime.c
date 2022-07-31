/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:17:43 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/30 17:17:45 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int main(void)
{
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(3));
    printf("%d\n", ft_is_prime(5));
    printf("%d\n", ft_is_prime(7));
    printf("%d\n", ft_is_prime(11));
    printf("%d\n", ft_is_prime(13));
    printf("%d\n", ft_is_prime(17));
    printf("%d\n", ft_is_prime(19));
    printf("%d\n", ft_is_prime(4));
    printf("%d\n", ft_is_prime(6));
    printf("%d\n", ft_is_prime(8));
}*/
