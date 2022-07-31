/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:57:17 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/31 10:57:20 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}