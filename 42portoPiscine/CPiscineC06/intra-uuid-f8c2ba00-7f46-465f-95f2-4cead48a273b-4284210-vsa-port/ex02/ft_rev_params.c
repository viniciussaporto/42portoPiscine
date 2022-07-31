/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:04:32 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/31 13:04:33 by vsa-port         ###   ########.fr       */
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
    int j;

    i = argc - 1;
    while (i >0)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i--;
    }
    return (0);
}