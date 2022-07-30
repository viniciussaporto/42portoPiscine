/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:05:29 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/30 15:05:32 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int res;

    res = 1;
    while (power != 0)
    {
        res *= nb;
        --power;
    }
    if (nb < 0)
    {
        return (0);
    }
    return (res);
}

int main(void)
{
    int res = ft_iterative_power(2, 4);
    printf("%i\n", res);
    return (0);
}