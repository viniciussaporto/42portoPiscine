/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:17:42 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/30 12:17:45 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    unsigned int    res;

    res = 1;
    while (nb > 0)
    {
        res *= nb;
        nb--;
    }
    if (nb < 0)
    {
        return (0);
    }
    return (res);
}

int main(void)
{
    printf("%i\n", ft_iterative_factorial(100));
    return (0);
}