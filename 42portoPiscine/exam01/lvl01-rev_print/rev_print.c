/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:55:33 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/22 15:04:23 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(void)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(i);
	i--;
	while (i >= 0)
	{
		write (1, &str, 1);
		i--;
	}
	return (str);
}
