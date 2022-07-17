/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:21:15 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/15 12:41:16 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		write (1, &numbers, 1);
		numbers++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
