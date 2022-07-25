/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsa-port <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:55:03 by vsa-port          #+#    #+#             */
/*   Updated: 2022/07/21 15:06:29 by vsa-port         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
#include <stdio.h>
int	main(void)
{
	char	n[] = "asdfasdf";
	char	m[] = "ASDFHAS";
	char	o[] = "";

	printf("%d\n", ft_str_is_lowercase(n));
	printf("%d\n", ft_str_is_lowercase(m));
	printf("%d", ft_str_is_lowercase(o));
	return (0);
}
