/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:36:45 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/31 10:36:46 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char a)
{
    write(1, &a, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    while (argv[0][i] != '\0')
    {
        ft_putchar(argv[0][i]);
        i++;
    }
    ft_putchar('\n');
    return (0);
}