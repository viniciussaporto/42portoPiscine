/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:39:09 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/21 14:51:45 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	n[] = "123456";
	char	m[] = "sadfasdf";

	printf("%d\n", ft_str_is_numeric(n));
	printf("%d", ft_str_is_numeric(m));
	return (0);
}*/
