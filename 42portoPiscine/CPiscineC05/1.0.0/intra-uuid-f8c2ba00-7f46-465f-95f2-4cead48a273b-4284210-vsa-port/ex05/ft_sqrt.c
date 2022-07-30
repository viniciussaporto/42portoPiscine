/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:49:14 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/30 16:49:16 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;
    int a;

    a = nb;
    if (a <= 0)
    {
        return (0);
    }
    if (a == 1)
    {
        return (1);
    }
    i = 2;
    if (a >= 2)
    {
        while (i * i <= a)
        {
            if (i * i == a)
            {
                return (i);
            }
            i++;
        }
    }
    return (0);
}
int main(void)
{
    printf("%d\n", ft_sqrt(-9));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(81));
}