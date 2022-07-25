/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:07:16 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/21 15:21:20 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			return (1);
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char n[] = "ASDFASDF";
	char m[] = "asdfadsf";
	char o[] = "654321";

	printf("%d\n", ft_str_is_uppercase(n));
	printf("%d\n", ft_str_is_uppercase(m));
	printf("%d", ft_str_is_uppercase(o));
	return (0);
}*/
